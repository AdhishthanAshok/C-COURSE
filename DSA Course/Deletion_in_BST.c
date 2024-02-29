#include<stdio.h>
#include<stdlib.h>

struct node {
      int data;
      struct node* left;
      struct node* right;
};

struct node* createnode(int data){
     struct node * n;
     n = (struct node*) malloc(sizeof(struct node));
     n->data = data;
     n->left = NULL;
     n->right = NULL;
     return n;
};

void inorder(struct node * root){
       
     if (root != NULL)
     {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
     }
};


struct node * search(struct node* root , int key){
    if (root==NULL)
    {
        return NULL;
    }
    if (root->data = key )
    {
        return root ;
    }
    else if(root->data > key){
    return search(root->left , key);
}
else{
    return search(root->right , key);
}
};

struct node * search_iter(struct node* root , int key){
    
    while (root != NULL)
    {   
        if (key == root->data)
        {
            return root;
        }
        else if(key > root->data){
        return root->right;
        }
        else{
        return root->left;
        }
    }
    return NULL;
};

struct node*  inordersucc(struct node * root){
    struct node*  current = root;
    while (current && current->left != NULL)
    {
        current = current->left;
    }
    return current;
};

struct node * Deletenode(struct node * root , int key){
    struct node * temp ; 
    if (key < root->data)
    {
        root->left = Deletenode(root->left , key);
    }
    else if (key > root->data)
    {
        root->right = Deletenode(root->right , key);
    }

    else{    // FOR CASES 1 AND 2 .....
         if (root->left == NULL)
         {
           temp = root -> right;
           free(root);
           return temp;
         }
         else if (root->right == NULL)
         {
           temp = root ->right;
           free(root);
           return temp;
         }
         // FOR CASE 3 ....
         temp = inordersucc(root->right);
         root->data = temp->data;
         root->right =  Deletenode(root->right , temp->data);
    }
return root;
};


int main(){

    struct node * p = createnode(9);
    struct node * p1 = createnode(4);
    struct node * p2 = createnode(11);
    struct node * p3 = createnode(2);
    struct node * p4 = createnode(7);
    struct node * p5 = createnode(10);
    struct node * p6 = createnode(15);

     p->left = p1;
    p->right = p2;
    p1->left= p3;
    p1->right= p4;
    p2->left= p5;
    p2->right= p6;


    //     printf("\nThe Checking result of BST of the BT is : \n");
    //     if (isBST(p)==1)
    //     {
    //         printf("\nIt is a Binary Search Tree .");
    //     }
    //     else
    //     printf("It is not a Binary Search Tree .");

printf("\nThe In order traveresal (Sorted Array Tree) of the Tree is : \n");
    inorder(p);
        printf("\n");

    // struct node * n = search_iter(p , 9);
    // if (n!=NULL)
    // {
    //     printf("\nFound : %d .\n" , n->data);
    // }
    // else{
    //     printf("\nNot Found .");
    // }
    // insert(p , 8);
    // insert(p , 77);
    // insert(p , 1);
    // insert(p , 7);
int element;
printf("\nEnter the Element to be deleted: \n");
scanf("%d" , &element);
    printf("\nAFTER DELETION :  \n");
    Deletenode(p, element);
        printf("\n");
    inorder(p);

return 0;
}




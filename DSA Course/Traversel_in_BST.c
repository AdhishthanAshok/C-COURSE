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

void preorder(struct node * root){
     if (root != NULL)
     {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
     }
}

void inorder(struct node * root){
       
     if (root != NULL)
     {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
     }
}

void postorder(struct node * root){
        
     if (root != NULL)
     {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
     }
}

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


        printf("The Pre order traveresal of the Tree is : \n");
    preorder(p);
        printf("\n");
         printf("\nThe In order traveresal (Sorted Array Tree) of the Tree is : \n");
    inorder(p);
        printf("\n");
        printf("\nThe Post order traveresal of the Tree is : \n");
        postorder(p);
return 0;
}
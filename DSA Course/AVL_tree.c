#include<stdio.h>
#include<stdlib.h>

struct node{
        int key ;
        struct node * left;
        struct node * right;
        int height;
};

int getheight(struct node * n){
        if(n==NULL){
            return 0;
        }
        return n->height;
}

struct node* createnode(int key){
     struct node * n;
     n = (struct node*) malloc(sizeof(struct node));
     n->key = key;
     n->left = NULL;
     n->right = NULL;
     n->height = 1;
     return n;
};

int max(int a , int b){
return (a>b) ? a:b ;
}

int getbalancedfactor(struct node * n){
        if(n == NULL){
            return 0;
        }
        return getheight(n->left) - getheight(n->right);
}

struct node * RightRotate(struct node * y){
        struct node * x = y-> left;
        struct node * t2 = x->right;

        x->right = y;
        y->left = t2 ;

        x->height = max(getheight(x->right) , getheight(x->left)) + 1;
        y->height = max(getheight(y->right) , getheight(y->left)) + 1;
       
        return x;
}

struct node * LeftRotate(struct node * x){
        struct node * y= x -> right;
        struct node * t2 = y->left;

        y->left = x ;
        x->right = t2;

        y->height = max(getheight(y->right) , getheight(y->left)) + 1;
        x->height = max(getheight(x->right) , getheight(x->left)) + 1;
        
        return y;
}

struct node * insert(struct node * node , int key){
        if (node == NULL)  return createnode(key);
        if ( key < node->key) node->left = insert(node->left , key);
        else if (key > node->key) node->right = insert(node->right , key);

        node->height = 1 + max(getheight(node->left) , getheight(node->right) );
        int bf = getbalancedfactor(node);

         // FOR LL CASE 

         if (bf > 1 && key < node->left->key)
         {
                return RightRotate(node);
         }

         // FOR RR CASE

         if (bf < -1 && key > node->right->key)
         {
                return LeftRotate(node);
         }

         // FOR LR CASE

         if (bf > 1 && key>node->left->key)
         {
                node->left = LeftRotate(node->left);
                return RightRotate(node);
         }
        
        // FOR RL CASE

         if (bf < -1 && key < node->right->key)
         {
                node->right = RightRotate(node->right);
                return LeftRotate(node);
         }
         
         return node;
}

void preorder(struct node * root){
     if (root != NULL)
     {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
     }
}

void inorder(struct node * root){
     if (root != NULL)
     {
        preorder(root->left);
        printf("%d ", root->key);
        preorder(root->right);
     }
}

int main(){
        struct node * root = NULL;
        root = insert(root ,1);
        root = insert(root ,2);
        root = insert(root ,4);
        root = insert(root ,5);
        root = insert(root ,6);
        root = insert(root ,3);

        preorder(root);
        printf("\n");
        inorder(root);
return 0;
}
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

int main(){

    /* This representation is made using individual nodes without using any function.
    
     struct node * p;
     p = (struct node*) malloc(sizeof(struct node));
     p->data = data;
     p->left = NULL;
     p->right = NULL;

     struct node * p1;
     p1 = (struct node*) malloc(sizeof(struct node));
     p1->data = data;
     p1->left = NULL;
     p1->right = NULL;

     struct node * p2;
     p2 = (struct node*) malloc(sizeof(struct node));
     p2->data = data;
     p2->left = NULL;
     p2->right = NULL;
    
                   // LINKING THE NODES .....
    p->left = p1;
    p->right = p2;
    
    */

    //  THIS REPRESENTATION IS MADE USING A FUNCTION WHICH IS CREATING THE NODES.....WE CAN MAKE NODES INDIVIDUALLY... 

    struct node * p = createnode(2);
    struct node * p1 = createnode(4);
    struct node * p2 = createnode(6);
              
                 // LINKING THE NODES .....
    p->left = p1;
    p->right = p2;


    printf("%d %d %d",p->data , p1->data , p2->data);


return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * prev;
    struct node * next;
};

struct node * transversal(struct node * ptr , struct node * p)
{
    while ( ptr->next != NULL)
    {
        printf("Forward Tranasversing : \n");
        for (int i = 1; i < 5; i++)
        {
           printf("%d \n" , ptr->data );
        ptr = ptr->next;
        }
        printf("\n");

        printf("Backward Tranasversing : \n");
        while (p->prev != NULL)
        {   
            for (int i = 0; i < 5; i++)
        {
            printf("%d \n" , p-> data);
           p = p -> prev;
        }
        
        }
        
    }  
    
}
struct node* createnode(int data){
    struct node * n;
     n = (struct node*) malloc(sizeof(struct node));
     n->data = data;
     n->prev = NULL;
     n->next = NULL;
     return n;


};

int main(){
struct node * head = (struct node*) malloc(sizeof(struct node));
struct node * n1 = (struct node*) malloc(sizeof(struct node));
struct node * n2 = (struct node*) malloc(sizeof(struct node));
struct node * last = (struct node*) malloc(sizeof(struct node));

         // The following representation will be give D-LL by creating a function which return the Node ........ 

// struct node * head = createnode(4);
// struct node * n1 = createnode(5);
// struct node * n2 = createnode(6);
// struct node * last = createnode(7);

// head->next = n1;
// n1 -> prev = head;
// n1 -> next = n2;
// n2 -> prev = n1;
// n2 -> next = last;
// last -> prev = n2;
// last -> next = NULL;

 // memory allocation 

 head = (struct node *) malloc (sizeof(struct node*));
 n1 = (struct node *) malloc (sizeof(struct node*));
 n2 = (struct node *) malloc (sizeof(struct node*));
 last = (struct node *) malloc (sizeof(struct node*));

 // joining nodes 

 head -> prev = NULL;
 head -> data  = 99;
 head -> next = n1;

 n1 -> prev = head;
 n1 -> data  = 88;
 n1 -> next = n2;

 n2 -> prev = n1;
 n2 -> data  = 77;
 n2 -> next = last;

 last -> prev = n2;
 last -> data  = 66;
 last -> next = NULL;

 transversal(head , last);

return 0;
}
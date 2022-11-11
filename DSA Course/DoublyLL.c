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

int main(){
struct node * head;
struct node * n1;
struct node * n2;
struct node * last;

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
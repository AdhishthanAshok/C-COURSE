#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
 struct node* next;
};

void linkedlistTraversal(struct node * ptr)
{ 
    while (ptr != NULL)
    {   for (int i = 1; i < 5; i++)
        {
        printf("Element no. %d is : %d \n" , i , ptr-> data);
        ptr = ptr->next  ;
        }
    }   
}

int main(){
struct node * head;
struct node * second;
struct node * third;
struct node * fourth;

 // Alloating memony in heap for each node

head  = (struct node *) malloc(sizeof(struct node * ));  // For C++  we will use the new Operator as : node* head = new node(0,"71");
second  = (struct node *) malloc(sizeof(struct node * ));// For C++  we will use the new Operator as : node* second = new node(1,"7");
third = (struct node *) malloc(sizeof(struct node * ));// For C++  we will use the new Operator as : node* third = new node(2,"11");
fourth = (struct node *) malloc(sizeof(struct node * ));// For C++  we will use the new Operator as : node* fourth = new node(3,"21");

// joining head and second nodes.

head -> data = 78;
head -> next = second;

// joining second and third nodes.

second -> data = 99;
second -> next = third;

// joining third and fourth node.

third -> data = 12;
third -> next = fourth;

// joining fourth and null node.

fourth -> data = 59;
fourth -> next = NULL;

linkedlistTraversal(head);
return 0;
}
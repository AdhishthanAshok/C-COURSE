#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node * next;
};

void linkedlistTraversal(struct node * ptr)
{ 
    while (ptr != NULL)
    {   
        printf("Element is : %d \n" , ptr-> data);
        ptr = ptr->next  ;
    }   
}

struct node * deletefromstart(struct node * head ){

    struct node *ptr = head;
    head = head -> next;
    free(ptr);
    return head;
};

struct node * deletefromindex(struct node * head , int index){
    struct node *p = head;
    struct node *q = head->next;

    for (int i = 1; i < index -1 ; i++)
    {
        p = p -> next;
        q = q -> next;
    }
    p -> next = q -> next;
    free(q);
    return head;
};

struct node * deletelastnode(struct node * head){
      struct node *p = head;
    struct node *q = head->next;
   while (q->next != NULL)
   {
      p = p -> next;
        q = q -> next;
   }
   p -> next = q -> next;
    free(q);
    return head;
};

struct node * deletefromvalue(struct node * head , int value){
    struct node *p = head;
    struct node *q = head->next;
    
    while (q->data != value && q->next != NULL)
    {
         p = p -> next;
        q = q -> next;
    }
    if (q->data == value)
    {
    p -> next = q -> next;
    free(q);
    }
    
    else
    printf("Element is not present.\n");
    return head;
};

int main(){
struct node * head;
struct node * second;
struct node * third;
struct node * fourth;

int index , value;
 // Alloating memony in heap for each node

head  = (struct node * ) malloc(sizeof(struct node * ));
second  = (struct node * ) malloc(sizeof(struct node * ));
third = (struct node * ) malloc(sizeof(struct node * ));
fourth = (struct node * ) malloc(sizeof(struct node * ));

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


 printf("Before LL deletion: \n");
 linkedlistTraversal(head);
 printf("\n");
    // printf("Enter the index you want to store the element: \n");
    //  scanf("%d" , &index);
     printf("Enter the value you want to delete: \n");
      scanf("%d" , &value);
head = deletefromvalue(head , value );
printf("\n");
 printf("After LL deletion: \n");
 linkedlistTraversal(head);
return 0;
}
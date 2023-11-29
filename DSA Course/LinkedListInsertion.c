#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertatfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->next = head;
    ptr->data = data;
    return ptr;
};

struct node *insertatend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    struct node * p = head;
    ptr->data = data;
    
    while (p->next != NULL)
    {
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = NULL;
    return head;

};

struct node *insertafternode(struct node *head,struct node *prevnode,  int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));

    ptr->data = data;
   ptr -> next = prevnode -> next;
   prevnode -> next = ptr;

   return head;

};

struct node *insertbeforenode(struct node *head,int value,  int data)
{    
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    struct node * p = head ;
    struct node * q = head->next ;
    ptr -> data = data;
  
    while(q->data != value){
        p = p->next;
        q = q->next;
    }
    ptr->next = q;
    p -> next = ptr;
    return head;
};

struct node *insertatIndex(struct node *head, int data , int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    struct node * p = head;
    ptr -> data  = data;
     int i = 0;
     
     while (i!= index -1)
     {
        p = p->next;
        i++;
     }
     ptr -> next = p -> next;
     p -> next = ptr;
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *first;
    struct node *third;
    struct node *fourth;
    int data;
    int index;

    head = (struct node *)malloc(sizeof(struct node *));
    second = (struct node *)malloc(sizeof(struct node *));
    third = (struct node *)malloc(sizeof(struct node *));
    fourth = (struct node *)malloc(sizeof(struct node *));

    head->data = 78;
    head->next = second;

    // joining second and third nodes.

    second->data = 99;
    second->next = third;

    // joining third and fourth node.

    third->data = 12;
    third->next = fourth;

    // joining fourth and null node.

    fourth->data = 59;
    fourth->next = NULL;

    linkedlistTraversal(head);
    
    printf("\n");
    printf("Enter the index you want to store the element: \n");
    scanf("%d" , &index);
    printf("Enter the element you want to store in the List : \n");
    scanf("%d", &data);

    // inserting new element at first .

    // head = insertatfirst(head, data);

    //  inserting new element at index .

    head = insertatIndex(head, data , index);

    //  inserting new element at the end .

    // head = insertatend(head, data);
    
    // inserting new element after a given node.

    //  head = insertafternode(head, head , data);
    printf("\n");

    printf("After insertion at index : \n");

    linkedlistTraversal(head);

    return 0;
}
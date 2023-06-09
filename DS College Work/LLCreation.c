#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void display(struct node* ptr , int size){
    printf("Printing all the elements   \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d -> " , ptr->data);
        ptr->next; 
    }
    
}

int main(){
   struct node * head = NULL;
   struct node * current = NULL;

   int size;
   printf("Enter the number of nodes : \n");
   scanf("%d",&size);
   
    for (int i = 0; i < size; i++)
    {     int data  ;
         printf("Enter the data of node %d : " , i + 1);
         scanf("%d",&data);

        struct node * new_node = (struct node*)malloc(sizeof(struct node));
        new_node -> data = data;
        new_node -> next = NULL;

        if(head == NULL){
            head == new_node;
            current == new_node;
        }
         else{
              current-> next = new_node;
              current = new_node;
         }
    }
    printf("\n");
     display(head , size);

return 0;
}
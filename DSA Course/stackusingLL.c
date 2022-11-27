#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * top = NULL;  // top is being made global variable because of pop function....

int linkedlistTraversal(struct node * top )
{ 
    while (top != NULL)
    {   
        for (int i = 1; i < 5; i++)
        {
            printf("Element no. %d is : %d \n" , i , top -> data);
            top = top->next  ;
        }
    }   
}

int isempty(struct node * top){
 if (top == NULL)
 {
    return 1;
 }
 else 
 return 0;
 
}

int isfull(struct node * top){
    struct node * n = (struct node*) malloc (sizeof(struct node));
 if (n == NULL)
 {
    return 1;
 }
 else 
 return 0;
 
}
struct node * push(struct node * top , int x ){
    if (isfull(top))
    {
        printf("Stack overflow\n");
    }
    else{
          struct node * p = (struct node*) malloc (sizeof(struct node));
          p->data = x;
          p->next = top ;
          top = p;
          return top;
    }
}

int pop(struct node * tp ){   // top variable changed to tp because global and local variable are of same name .....
    if (isempty(tp))
    {
        printf("Stack Underflow.\n");
    }
    else{
        struct node * n = tp;
        top = tp->next;       // here top is global and tp is local variable ...we have to make global top = local tp -> next
        int x = n-> data;     // so that top in pop() function and top in main() will be connected .
        free(n);
        return x;
    }
}


int main(){
    top = push(top , 56);
    top = push(top , 6);
    top = push(top , 53);
    top = push(top , 69);

    linkedlistTraversal(top);
    int element = pop(top);
    
    printf("\nElement %d is popped. \n\n" ,element);
    linkedlistTraversal(top);



return 0;
}
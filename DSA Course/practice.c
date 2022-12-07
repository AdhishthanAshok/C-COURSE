#include<stdio.h>
#include<stdlib.h>

struct node {
int data ; 
struct node* next ; 
};
struct node *  createnode(int data){
struct node * n = (struct node* )malloc(sizeof(struct node));
n->data = data;
n->next = NULL;
};

int main(){
struct node * p1 = createnode( 3);
struct node * p2 = createnode(6);
struct node * p3 = createnode(7);
printf("%d %d %d " , p1->data , p2->data , p3->data);
p1->next = p2;
p2->next = p3;
p2->next = NULL;

if (p1->data < p2->data &&  p2->data < p3->data)
{
    printf("\nLinked list is sorted.\n");
}
else{
printf("\nLinked list is not sorted.\n");
}


return 0;
}
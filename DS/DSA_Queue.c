#include<stdio.h>
#include<stdlib.h>

struct queue {
    int size ;
    int f , r ;
    char *arr ; 
};
int isfull(struct queue * q){
    if (q->r == q->size-1)
    {
        return 1;
    }
}

int isempty(struct queue * q){
if (q-> f == q-> r)
{
    return 1;
}

}

void display(struct queue * q , int size){
    for (int i = 1; i <= size+3; i++)
    {
    printf("%c -->", q->arr[i-1]); 
     q->arr[q->f] =  q->arr[q->f+1];
    }
    printf("End");
}
void enqueue (struct queue * q , char val){
      if (!isfull(q))
      {
        printf("\nQueue Overflow\n");
      }
      else{
        q->r = q->r+1;
        q->arr[q->r] = val;
      }
}

int main(){
struct queue * q;
q->size = 20;
q->r = q->f = -1;
q->arr = (char *)malloc(q->size * sizeof(char));
char element ;
int  ent_size;
enqueue(q , 4);
enqueue(q , 2);
enqueue(q , 6);
    printf("Enter the number of elements you want to enter : \n");
    scanf("%d",&ent_size);
    printf("Enter  elements you want to enter : \n");
for (int i = 0; i < ent_size; i++)
{    scanf("%c",&element);
    enqueue(q , element);
}

// enqueue(q , 7);
// enqueue(q , 49);
display(q , ent_size);

return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct circularqueue
{
    int size;
    int f;
    int r;
    int * arr;
};

int isempty(struct circularqueue *q){
   if(q->f == q-> r){
    return 1;
   }
   else 
   return 0;
}

int isfull(struct circularqueue *q){
   if((q->r+1)%q->size == q-> f){
    return 1;
   }
   return 0;
}

void enqueue(struct circularqueue *q , int val){

    printf("Adding element %d \n" , val);
     if(isfull(q)){
        printf("Queue Overflow \n");
     }
     else{
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = val;
     }
}

int dequeue(struct circularqueue *q ){
    int a = -1;
     if(isempty(q)){
        printf("Not possible to remove an element .\n");
     }
     else{
        q->f = (q->f+1)%q->size;
        a = q->arr[q->f] ;
     }
     return a;
}

int main(){
struct circularqueue q;

q.size = 4;
q.f = q.r = -1;
q.arr = (int *)malloc(q.size * sizeof(int));

enqueue(&q , 1);
enqueue(&q , 2);
enqueue(&q , 3);
enqueue(&q , 4);

printf("Removing element %d \n" ,dequeue(&q));
printf("Removing element %d \n" ,dequeue(&q));
printf("Removing element %d \n" ,dequeue(&q));
printf("Removing element %d \n" ,dequeue(&q));

enqueue(&q , 5);
enqueue(&q , 6);


if (isempty(&q))
    {
printf("Queue is empty \n");
    }

if (isfull(&q))
    {
printf("Queue is Full \n");
    }
return 0;
}
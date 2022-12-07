#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;   // front for pushing the elements. 
    int r;   // rear  for popping the elements. 
    int * arr;  
};

int isempty(struct queue *q){
   if(q->f == q-> r){
    return 1;
   }
   else 
   return 0;
}

int isfull(struct queue *q){
   if(q->r == q-> size-1){
    return 1;
   }
   return 0;
}

void enqueue(struct queue *q , int val){
     if(isfull(q)){
        printf("Queue Overflow \n");
     }
     else{
        q->r = q->r+1;
        q->arr[q->r] = val;
     }
}

int dequeue(struct queue *q ){
    int a = -1;
     if(isempty(q)){
        printf("Not possible to remove an element .\n");
     }
     else{
        q->f++;
        a = q->arr[q->f] ;
     }
     return a;
}

int main(){
struct queue q;
q.size = 10;
q.f = q.r = -1;
q.arr = (int *)malloc(q.size * sizeof(int));

enqueue(&q , 1);
enqueue(&q , 2);
enqueue(&q , 3);
enqueue(&q ,4);
printf("Removing element %d \n" ,dequeue(&q));
printf("Removing element %d \n" ,dequeue(&q));


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
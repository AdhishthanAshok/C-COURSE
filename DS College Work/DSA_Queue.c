#include<stdio.h>
#include<stdlib.h>

struct queue {
    int size ;
    int f;
    int r;
    int * arr;
};


int isfull(struct queue * q) {
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}
int isempty(struct queue * q) {
    if(q->r == q->f){
        return 1;
    }
    return 0;
}

void enqueue(struct queue * q , int value){
     if(isfull(q)){
        printf("Queue Overflow");
     }
     else{
        q->r = q->r+1;
        q->arr[q->r] = value;
     }
}
int dequeue(struct queue * q){
    int a = -1;

     if(isempty(q)){
        printf("Queue Underflow");
     }
     else{
        q->f = q->f+1 ;
        a =  q->arr[q->f];
     }
     return a;
}

int main(){
        struct queue * q ;
        q->f = q->r = -1;
        q->size = 10;
        q->arr = (int*) malloc (q->size*sizeof(int));    


return 0;
}
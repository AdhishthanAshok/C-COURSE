#include<stdio.h>
#include<stdlib.h>
                              // BFS => BREADTH FIRST SEARCH
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
                        // First Initialize the queue 
struct queue q;
q.size = 400;
q.f = q.r = 0;
q.arr = (int *)malloc(q.size * sizeof(int));

                        // Now initialize the implementation of BFS

int node;
int i = 0;
int visited[7] = {0,0,0,0,0,0,0};
    int a [7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0}, 
        {0,0,0,0,1,0,0} 
    }; 
    printf("%d ", i);
    visited[i] = 1;
                      // Enqueue i for Exploration 
    enqueue(&q , i);

    while (!isempty(&q))
    {
        int node = dequeue(&q);
        for (int j = 0; j < 7; j++)
        {    
            if (a[node][j]==1 && visited[j]==0)
            {
              printf("%d ",j);
              visited[j]=1;
              enqueue(&q , j);
            }
        }
    }

return 0;
}
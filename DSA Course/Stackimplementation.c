#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size ;
    int top;
    int * arr;
};

int isempty(struct stack *ptr){
    if (ptr->top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(struct stack *ptr){
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}


int main(){

struct stack *s;
s->size = 6;
s->top = -1;
s->arr = (int *) malloc (s->size*sizeof(int));

// for (int i = 0; i < s->size; i++)
// {
//     scanf("%d " ,s->arr[i]);
//     s->top++;
// }

s->arr[0] = 778;
s->top++;
s->arr[1] = 77;
s->top++;
s->arr[2] = 78;
s->top++;
s->arr[3] = 8;
s->top++;
s->arr[4] = 7;
s->top++;
s->arr[5] = 48;
s->top++;

    printf("Checking Emptiness. \n");
if (isempty(s))
{
    printf("Stack is empty. \n\n");
}
else{
    printf("Stack is not empty. \n\n");
}

    printf("Checking Fullness. \n");
if (isfull(s))
{
    printf("Stack is full. \n");
}
else{
    printf("Stack is not full . \n");
}

return 0;
}
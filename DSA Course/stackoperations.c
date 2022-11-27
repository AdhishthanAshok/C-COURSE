#include<stdio.h>
#include<stdlib.h>

struct stack{
int size;
int top;
int * arr;
};

void transversal(struct stack * ptr , int size){
for (int i = 0; i < ptr->size ; i++)
{
    printf("Elements is : %d ." , ptr->arr[i] );
printf("\n");
}
}

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

void push(struct stack * ptr , int val){
    if (isfull(ptr))
    {
        printf("Stack overflow. \n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr ) {
    if (isempty(ptr))
    {
       printf("Stack Underflow.\n");
       return -1;
    }
    else{
            int val = ptr->arr[ptr->top] ;
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr , int i){
    int arrayindex = ptr->top-i+1;
    if ((ptr->top-i+1)<0)
    {
    printf("Not a valid position \n");
    }
    else{
          return ptr->arr[arrayindex];
    }
}

int stacktop(struct stack *ptr){
    return ptr->arr[ptr->top];
}

int stackbottom(struct stack *ptr){
    return ptr->arr[0];
}

int main(){
    
struct stack *s = (struct stack *) malloc (sizeof(struct stack)) ;
s->size = 9;
s->top = -1;
s->arr = (int *) malloc (s->size*sizeof(int));

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
s->arr[5] = 48; // 5 elements already present here and 4 items are pushed later ...total 9 elements
s->top++;
printf("1 is for 'YES' and 0 is for 'NO' \n\n");
printf("Checking empty ness and fullness before pushing: \n");
printf("Emptiness : %d \n" , isempty(s));
printf("FUllness : %d \n" , isfull(s));

printf("Running Push Function: \n");
push(s , 58);
push(s , 5);
push(s , 52);
// push(s , 51); // last element for pushing, more than this will be overflow condition

printf("Running Pop Function: \n");
pop(s);
// pop(s);
// pop(s);
// pop(s);
// pop(s);    
// pop(s);
// pop(s);
// pop(s);
// pop(s); // Last element to pop out...more popping cause emptiness ...IYKYK.....hehe

printf("Checking empty ness and fullness after pushing: \n");
printf("Emptiness : %d \n" , isempty(s));
printf("FUllness : %d \n" , isfull(s));

// transversal(s , 9);
for (int j = 1; j <= s->top+1; j++)
{
    printf("Element at %d index is = %d . \n" , j , peek(s , j));
}

printf("\nTop most element of the stack is %d . \n" , stacktop(s));
printf("Bottom most element of the stack is %d . \n" , stackbottom(s));

return 0;
}
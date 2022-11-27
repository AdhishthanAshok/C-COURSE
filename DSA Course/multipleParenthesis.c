#include<stdio.h>
#include<stdlib.h>

struct stack{
int size;
int top;
char * arr;
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

void push(struct stack * ptr , char val){
    if (isfull(ptr))
    {
        printf("Stack overflow. \n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char pop(struct stack *ptr ) {
    if (isempty(ptr))
    {
       printf("Stack Underflow.\n");
       return -1;
    }
    else{
            char val = ptr->arr[ptr->top] ;
        ptr->top--;
        return val;
    }
}

char stacktop(struct stack *ptr){
    return ptr->arr[ptr->top];
}

int match(char a , char b){
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
        return 0;
    }

int parenthesis(char *exp){
    struct stack * sp;
    sp->size = 100;
    sp->top= -1;
    sp->arr = (char *) malloc (sp->size*sizeof(char));
    char popped_ch ;

    for (int i = 0; exp[i] != '\0' ; i++)
    {
        if (exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            push(sp , exp[i]);
        }
        else if (exp[i]==')' || exp[i]=='}' || exp[i]==']'){
                if (isempty(sp))
                {
                    return 0;
                }
               popped_ch = pop(sp);
               if (!match(popped_ch , exp[i]))
               {
                    return 0;
               }
               
            }
            
        }
        if (isempty(sp))
            {
                return 1;
            }
        else
                return 0;
}
    


int main(){
        char *exp = "[8*{9+(3-2)+4}*6]";
        if (parenthesis(exp))
        {
            printf("Parenthes is balanced .\n");
        }
        else{
            printf("Parenthesis is not balanced .\n");
        }
        

    return 0;
}
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

int parenthesis(char *exp){
    struct stack * sp;
    sp->size = 100;
    sp->top= -1;
    sp->arr = (char *) malloc (sp->size*sizeof(char));
    
    for (int i = 0; exp[i] != '\0' ; i++)
    {
        if (exp[i]=='(')
        {
            push(sp , '(');
        }
        else if (exp[i]==')'){
                if (isempty(sp))
                {
                    return 0;
                }
                pop(sp);
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
        char *exp = "8*(9/7)+(15/5)*(5";
        if (parenthesis(exp))
        {
            printf("Parenthesis are matching .\n");
        }
        else{
            printf("Parenthesis are not matching .\n");
        }
        

    return 0;
}
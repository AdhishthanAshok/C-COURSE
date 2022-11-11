#include<stdio.h>
#include<stdlib.h>

// DECLARING AN ADT FOR USE 
struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

// CREATING AN ARAAY FROM ADT AND ASSIGNING VALUE OF STRUCT ADT TO OUR SET ARRAY
void createarray(struct myarray *a , int tsize , int usize){
 a->total_size = tsize;
 a->used_size = usize;
 a->ptr = (int*) malloc (tsize * sizeof(int));
}

// DISPLAYING THE ARRAY 
void display(struct myarray *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d \n" , (a->ptr)[i]);
    }  
} 

// SETTING THE VALUES THE ARRAY 
void setval(struct myarray *a){
    int n ;
    for (int i = 0; i < a->used_size; i++)
    {
        scanf("%d" , &n);
        (a->ptr)[i] = n;
    }  
} 

int main(){
    struct myarray marks;
    int size , elements;

    printf("Enter the size of the array: \n");
    scanf("%d",&size);

    printf("Enter the number of elements you want to store in the array: \n");
    scanf("%d", &elements );

    createarray(&marks ,size , elements);

    printf("Enter the value of array: \n");
    setval(&marks);
    
    printf("Displaying the value of array: \n");
    display(&marks);
return 0;
}
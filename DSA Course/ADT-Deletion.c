#include<stdio.h>

void transverse(int arr[] ,int size)
{
    printf("Elements of the array are: \n");
    for (int i = 1; i <= size; i++)
    {
        printf("%d " , arr[i]);
    }
    
} 

void deletion(int arr[] , int size , int index){
     printf(" \nDeleting operation is running \n");
     for (int i = index ; i < size; i++)
     {
        arr[i] = arr[i+1];
     }
}

int main(){
int arr[20] , size , index;

printf("Enter the size of the array: \n");
scanf("%d" , &size);
printf("Enter the elements of the array: \n");
    for (int i = 1; i <= size; i++)
    {
        scanf("%d" , &arr[i]);
    }
transverse(arr , size ); 

printf("\nEnter the index to delete the element in the array: \n");
scanf("%d",&index);

deletion(arr , size  , index);
size -= 1;

printf("\nAfter deletion the array is: \n");
transverse(arr , size ); 
return 0;
}
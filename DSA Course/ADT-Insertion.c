#include<stdio.h>

void transverse(int arr[] ,int size)
{
    printf("Elements of the array are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d " , arr[i]);
    }
    
} 

int insertion(int arr[] , int size , int element , int capacity , int index){
     printf(" \nInserting operation is running \n");
     if(size>=capacity){
        return -1;
     }

     for (int i = size - 1 ; i >= index; i--)
     {
        arr[i+1] = arr[i];
     }
     arr[index] = element;
     return 1;
}

int main(){
int arr[20] , size , element , capacity , index;

printf("Enter the size of the array: \n");
scanf("%d" , &size);
printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d" , &arr[i]);
    }
transverse(arr , size ); 

printf("\nEnter the element to insert in the array: \n");
scanf("%d",&element);
printf("\nEnter the index to insert the element in the array: \n");
scanf("%d",&index);
insertion(arr , size , element , 20 , index);
size += 1;
printf("\nAfter insertion the array is: \n");
transverse(arr , size ); 
return 0;
}
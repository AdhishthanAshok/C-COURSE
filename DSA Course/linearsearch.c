#include<stdio.h>

void display(int arr[] ,int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d " , arr[i]);
    }
} 

int linearsearch(int arr[] , int size , int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i+1;
        }
    }
        return -1;
}
int main(){
    int arr[20] , size , element;
    printf("Enter the size of the array: \n");
    scanf("%d" ,&size);
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d" , &arr[i]);
    }
    printf("Enter the element you want to search in the array: \n");
    scanf("%d" ,&element);

  int result = linearsearch(arr , size , element);
   printf("The element %d is present at the index %d of the array \n" , element , result);
    
    return 0;
}
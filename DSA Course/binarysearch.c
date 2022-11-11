#include<stdio.h>

int binarysearch(int arr[] , int size , int element)
{
    int low , mid ,high;
    low = 0;
    high = size - 1;

   // search ends till low will be equal to high .
    while(low<=high){
        // update mid in every occurence .
    mid = (low + high)/2;
        if (arr[mid] == element)
        {
            return mid + 1;
        }
        if(arr[mid]>element){
            high = mid - 1;
        }
        else{
            low = mid + 1 ;
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

  int result = binarysearch(arr , size , element);
   printf("The element %d is present at the index %d of the array \n" , element , result);
return 0;
}
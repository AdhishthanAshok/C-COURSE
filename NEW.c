# include<stdio.h>
int binarysearch(int arr[] , int size , int x)
{
     int low = 0 , mid , high = size +1;
     while(low<=high){ 
     mid = (low+high)/2;
     if(arr[mid] == x){
         return mid + 1;
     }
     if(arr[mid]< x){
         low = mid + 1;
     }
     if(arr[mid]> x){
         high = mid -1;
     }
     }
}
    int main(){
    int arr[20] , size , x ,choice ;
    printf("Enter the size of the array: \n");
    scanf("%d" , &size);

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
    scanf("%d" , &arr[i]);
    }
      printf("\n");
    printf("Enter the element you want to search: \n");
    scanf("%d" , &x);
    printf("\nBy Binary Search: \n");
    int searching = binarysearch(arr , size , x);
    if(searching == -1){
        printf("Element is not present in the given array.");
    }
    else
     printf("\nElement %d is present index %d",x, searching );
    
    return 0;
}
    
# include<stdio.h>

int linearsearch(int arr[] , int size , int x){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return i + 1 ;
        }
        
    }
    return -1;
}    
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
    
     return -1;
}
    
int chksorting(int arr[], int size){
   
    if (size == 1 || size == 0)
        return 1;
 
    if (arr[size - 1] < arr[size - 2])
        return 0;
 
    return chksorting(arr, size - 1);
}
    

int main(){
    int arr[20] , size , x ,choice;
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

    printf("Enter the choice of search for Linear enter 1 and for Binary enter 2 : \n");
    scanf("%d" , &choice );
    
    switch(choice){
        case 1:{
    printf("By linear  Search: \n");
    
    int result = linearsearch(arr , size , x);
    if (result == -1)
    {
        printf("There is no element. \n");
    }
    else
    printf("Element is present at position %d in the given array \n." , result);
    break;
    }
    
    case 2:{
    if(!chksorting(arr , size)){
        printf("Array is not sorted\n");
    }
    else{
    printf("\nBy Binary Search: \n");
    int searching = binarysearch(arr , size , x);
    if(searching == -1){
        printf("Element is not present in the given array.");
    }
    else
     printf("\nElement %d is present index %d",x, searching );
    
    }
    break;
    }
    }   
    return 0;
}

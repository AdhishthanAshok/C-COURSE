# include<stdio.h>

int linearsearch(int arr[] , int size , int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i + 1 ;
        }
        
    }
    return -1;
}    
int binarysearch(int arr[] , int size , int element)
{
     int low = 0 , mid , high = size +1;
     while(low<=high){ 
     mid = (low+high)/2;
     if(arr[mid] == element){
         return mid + 1;
     }
     if(arr[mid]< element){
         low = mid + 1;
     }
     if(arr[mid]> element){
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
    int arr[20] , size , element ,choice ;
    printf("Enter the size of the array: \n");
    scanf("%d" , &size);

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
    scanf("%d" , &arr[i]);
    }
      printf("\n");
    printf("Enter the element you want to search: \n");
    scanf("%d" , &element);

    printf("Enter the choice of search for Linear enter 1 and for Binary enter 2 : \n");
    scanf("%d" , &choice );
    
    switch(choice){
        case 1:{
    printf("By linear  Search: \n");
    
    int result = linearsearch(arr , size , element);
    if (result == -1)
    {
        printf("There is no element. \n");
    }
    else
    printf("Element is present at position %d in the given array. \n" , result);
    break;
    }
    
    case 2:{
    if(!chksorting(arr , size)){
        printf("Array is not sorted\n");
    }
    else{
    printf("\nBy Binary Search: \n");
    int searching = binarysearch(arr , size , element);
    if(searching == -1){
        printf("Element is not present in the given array.");
    }
    else
     printf("\nElement %d is present at index %d",element, searching );
    }
    break;
    }
    }   
    return 0;
}

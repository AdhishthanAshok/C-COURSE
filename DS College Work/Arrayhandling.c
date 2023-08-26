// #include <stdio.h>

// int even(int arr[], int n)
// {
//     int count = 0;
//     for (int i=0; i < n; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int maximum(int arr[], int n){
   
//     for (int i = 1; i < n; i++)
//     {
//         if(arr[i]>arr[0]){
//             arr[0] = arr[i];
//         }
//     }
    
// return arr[0];
// }

// int main(void){
//        int x;
//   int arr[100];
//   printf("Enter the number of elements : ");
//   scanf("%d", &x);

//   for (int i = 0; i < x; i++) {
//     printf("Enter number %d: ", i + 1);
//     scanf("%d", &arr[i]);
//   }
//     printf("The number of even elements in the given function are: \n");
//     printf("%d .",even(arr, x));

//     printf("\n");
    
//     printf("The maximum element in the given array is: \n");
//     printf("%d ." , maximum(arr , x));
// } 

/*********************************BEST METHOD******************************/
#include <stdio.h>

int even(int arr[], int n)
{
    int count = 0;
    for (int i=0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int max(int arr[], int n){
   int max=-1;
    for (int i = 0; i < n; i++)
    {
        if(max>arr[i]){
            max= arr[i];
        }
    }
    
return max;
}

int main(void){
       int x=4;
       int arr[] = {100, -1 ,-2 ,-3};

 
    printf("The number of even elements in the given function are: \n");
    printf("%d .",even(arr, x));

    printf("\n");
    
    printf("The maximum element in the given array is: \n");
    printf("%d ." , max(arr , x));
} 



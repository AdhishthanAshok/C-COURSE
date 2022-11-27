#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void display(int *A , int size){
for (int i = 0; i < size; i++)
{   
    printf("%d ", A[i]);
}
    printf("\n");
}

int maximum(int A[] , int n ){
     int max = INT_MIN;
     for (int  i = 0; i < n; i++)
     {
        if (max < A[i])
        {
            max = A[i];
        }
     }
     return max;
}

void Countsort(int * A , int n){
     int i , j ;
                              // Find max element of A
     int max = maximum(A , n);
                              // Create Count Array
     int * count = (int*) malloc ((max+1)*sizeof(int));
                              // Initialize the array element to 0.
     for (int i = 0; i < max+1 ; i++)
     {
        count [i] = 0;
     }
                              // Increment the corresponding index in the count array 
     for (int i = 0; i < n; i++)
     {
        count[A[i]]++;
     }
        i = 0;                      //  Counter for the Count array 
        j = 0;                      //  Counter for the Given array 

     while(i<max){
        if (count[i]>0){
                A[j] = i;
                count[i]--;
                j++;
        }
        else{
            i++;
        }
    }
}

int main(){
int size ;
printf("Enter the size of the array : \n");
scanf("%d", &size);
printf("Enter the Elements of the array : \n");
int A[size];
for (int i = 0; i < size; i++)
{
    scanf("%d", &A[i]);
}

    printf("Displaying the Array :\n");
display(A , size+1);

    printf("\nSorting the Array by Count Sort :\n");
Countsort(A , size);

    printf("\nDisplaying the Array after Sorting:\n");
display(A , size);

return 0;
}
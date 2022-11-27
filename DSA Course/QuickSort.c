#include<stdio.h>

void display(int *A , int size){
for (int i = 0; i < size; i++)
{   
    printf("%d ", A[i]);
}
    printf("\n");
}

int  partition(int A[] , int low , int high){
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)            //increasing i until i will be greater than the pivot element.........
        {
            i++;
        }
        while (A[j] > pivot)        // decreasing j until j will be equal or lesser than the pivot element.......
        {
            j--;
        }

        if (i<j)
        {                  // Swapping i and j when j become less than i.....
             temp = A[i];
             A[i] = A[j];
             A[j] = temp;
        }
        
    } while (i < j);
                             //  Swapping pivot element with j ...after j becomes less than i..... 
            temp = A[low];
            A[low] = A[j];
            A[j] = temp;

            return j;       // returning  j ...as its the element of the subarray 
}
                     
 
void  Quicksort(int A[] , int low , int high){
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(A , low , high);
        Quicksort(A , low , partitionIndex-1);
        Quicksort(A , partitionIndex+1 , high);
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
display(A , size);

    printf("\nSorting the Array by Quick Sort \n");
    // printf("       Index : 0 1 2 3 4 \n");
Quicksort(A , 0 , size-1);

    printf("\nDisplaying the Array after Sorting:\n");
display(A , size);

return 0;
}
#include<stdio.h>

void display(int *A , int size){
for (int i = 0; i < size; i++)
{   
    printf("%d ", A[i]);
}
    printf("\n");
}

void insertionsort(int *A , int size){
    int key , j;
    for (int i = 1; i <= size -1; i++)  // For Number of passes ....
    {
           key = A[i];    // The element whick have to be inserted after comparison ....
           j = i-1;       // The previous index which have to be compared from the key index .... 

           while (j>=0 && A[j]>key)       // For comparing prev elements ...  ' > ' for ascending order and ' < ' for descending order ....
           {
                 A[j+1] = A[j];           // making key  = prev index ...for inserting ...
                 j--;                     // decresing j index beacuse key is inserted ....
           }
           A[j+1] = key;
           printf("After Pass %d : ", i);
           display(A , size);
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

    printf("\nSorting the Array by Insertion Sort :\n");
insertionsort(A , size);

    printf("\nDisplaying the Array after Sorting:\n");
display(A , size);

return 0;
}
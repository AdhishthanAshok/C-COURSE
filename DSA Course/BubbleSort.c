#include<stdio.h>

void display(int *A , int size){
for (int i = 0; i < size; i++)
{   
    printf("%d ", A[i]);
}
    printf("\n");
}
void bubblesort(int *A , int size){
int temp;
int issorted = 0;
for (int i = 1; i <= size-1; i++)     // For size-1 Passes
{
        issorted = 1;
    for (int j = 0; j < size-1-i; j++)
    {
        if (A[j]>A[j+1])
        {                           // Swapping the values ....
            temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
            issorted = 0;
        }
      }
      if(issorted){
        return;
      }
      printf("After Pass %d : " , i);
      display( A , size);
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

    printf("\nSorting the Array by Bubble Sort :\n");
bubblesort(A , size);
    printf("\nDisplaying the Array after Sorting:\n");
display(A , size);

return 0;
}
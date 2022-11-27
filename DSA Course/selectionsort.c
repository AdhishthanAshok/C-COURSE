#include<stdio.h>

void display(int *A , int size){
for (int i = 0; i < size; i++)
{   
    printf("%d ", A[i]);
}
    printf("\n");
}

void selectionsort(int *A , int size)
{
        int indexOfMin , temp;            // indexOfMin will be the index where the minimum element will be stored after comparison....

        for (int  i = 1; i <= size -1; i++)             // Number of Passes
        {
            indexOfMin = i;
            for (int  j = i+1; j < size; j++)          // For compaisons from i+1 to size ....last element will be sorted automatically..
            {
                    if (A[j] < A[indexOfMin])
                    {
                        indexOfMin = j;
                    }
            }
            // swapping the values after comparing. 
            temp = A[i];
            A[i] = A[indexOfMin];
            A[indexOfMin] = temp;

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

    printf("\nSorting the Array by Selection Sort :\n");
    printf("       Index : 0 1 2 3 4 \n");
selectionsort(A , size);

    printf("\nDisplaying the Array after Sorting:\n");
display(A , size);

return 0;
}
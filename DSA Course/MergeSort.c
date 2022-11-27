#include<stdio.h>

void display(int *A , int size){
for (int i = 0; i < size; i++)
{   
    printf("%d ", A[i]);
}
    printf("\n");
}

void Merge(int A[] , int low , int mid , int high ){
    int i , j , k , B[100];
    i = low ;
    j = mid +1;
    k = low;

    while (i<= mid && j<=high)
    {
        if(A[i]<A[j]){
            B[k] = A[i];
            i++;
            k++;
        }
        else{
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i<= mid)
    {
        B[k] = A[i];
        k++ ;
        i++;
    }
    while (j<= high)
    {
        B[k] = A[j];
        k++ ;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}
 
void Mergesort(int Arr[] , int low , int high){
    int mid ;
       if (low<high)
       {
        mid = (low+high)/2;
        Mergesort(Arr , low , mid);
        Mergesort(Arr , mid + 1 , high);
        Merge(Arr , low , mid , high);
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

    printf("\nSorting the Array by Merge Sort :\n");
    // printf("       Index : 0 1 2 3 4 \n");
Mergesort(A , 0 , size-1);

    printf("\nDisplaying the Array after Sorting:\n");
display(A , size);

return 0;
}
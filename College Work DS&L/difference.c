#include<stdio.h>

int main()
{   int i , j , k = 0 ,p = 0 ,  arr1[10] , arr2[10] , diff[10] , diff2[10], q=0 , l , n1 , n2  ;

printf("Enter the number of elements or size of SET 1: \n");
scanf("%d", &n1);
printf("Enter the number of elements or size of SET 2: \n");
scanf("%d", &n2);

printf("Enter the elements of SET 1 : \n");
for ( i = 0; i < n1; i++)
{
scanf("%d", &arr1[i]);
}
printf("Enter the elements of SET 2: \n");
for ( i = 0; i < n2; i++)
{
scanf("%d", &arr2[i]);
}
// for A - B.
for ( i = 0; i < n1; i++)
{
    for ( j = 0; j < n2; j++)
    {
        if (arr1[i]==arr2[j])
        k++;
        
    }
    if (k == 0)
    {
        diff[p] = arr1[i];
        p++;
    }
    k =0;
}
// for B - A
for ( i = 0; i < n2; i++)
{
    l=0;
    for ( j = 0; j < n1; j++)
    {
        if (arr2[i]==arr1[j])
        l++;
        
    }
    if (l == 0)
    {
        diff2[q] = arr2[i];
        q++;
    }
    
}

printf("The difference between SET A and SET B = [A-B] is: \n");
for (i = 0; i < p; i++)
{
    printf("%d \n", diff[i]);
}
printf("\n");
printf("The difference between SET B and SET A = [B-A] is: \n");
for ( i = 0; i < q; i++)
{
    printf("%d \n", diff2[q]);
}
    return 0 ;
};

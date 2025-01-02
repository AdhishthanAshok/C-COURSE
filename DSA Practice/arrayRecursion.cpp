#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size)
{
    if (size == -1)
    {
        return;
    }
    cout << arr[size];
    return reverse(arr, size - 1);
}

int countZeroes(int a, int count)
{
    if (a == 0)
    {
        return count;
    }

    int rem = a % 10;
    if (rem == 0)
    {
        return countZeroes(a / 10, count + 1);
    }
    return countZeroes(a / 10, count);
}

int main()
{
    // Reverse an Array
    // int arr[] = {1, 2, 3, 4, 5};
    // int len = 5;
    // reverse(arr, len-1);

    int a = 10210102;
    cout << countZeroes(a, 0);
    return 0;
}
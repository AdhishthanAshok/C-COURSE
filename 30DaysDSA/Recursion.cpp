#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if (n < 1)
    {
        return;
    }
    // print(n - 1);       //  this Arrangement will print numbers from 1 to n    , beacause Firstly the Stack will be filled and then return to the starting state
    // cout << n << " ";

    // cout << n << " ";   //  this Arrangement will print numbers from n to 1  , because firstly the Number will be printed then the Stack will be filled with the functions.
    // print(n - 1);
}

int binary(int arr[], int k, int s, int e)
{
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (mid > k)
    {
        return binary(arr, k, s, mid - 1);
    }
    else if (mid < k)
    {
        return binary(arr, k, mid + 1, e);
    }
    else
    {
        return mid;
    }
}

int digitSum(long long n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + digitSum(n / 10);
}

int digitProd(int n)
{
    if (n % 10 == n)
    {
        return n;
    }
    return (n % 10) * digitProd(n / 10);
}

int sum = 0;

int reverse(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int rem = n % 10;
    sum = sum * 10 + rem;
    reverse(n / 10);
    return sum;
}

bool palindrome(int n)
{
    return n == reverse(n);
}

int main()
{ // PRINT N to 1 or 1 to N
    // int n = 3;
    // print(n);

    // BINARY SEARCH
    // int arr[] = {1, 2, 3, 4, 5, 6, 7};
    // int ele = 9;
    // cout << binary(arr, ele, 0, 7);
    // cout << endl;
    // int ele1 = 4;
    // cout << binary(arr, ele1, 0, 7);

    // DIGIT SUM
    // long long  a = 1245678987654389;
    // cout << digitSum(a);

    // PRODUCT of DIGIT
    // int a = 12122;
    // cout << digitProd(a);

    // Reverse a Number
    // int n = 17543;
    // cout << reverse(n) << endl;
    // cout << sum << endl;

    // PALINDROME
    int a = 17543;
    cout << palindrome(17543);
    return 0;
}
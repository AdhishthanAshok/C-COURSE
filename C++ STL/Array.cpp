#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    vector<int> arr(size, 1213);

    for (int count : arr)
    {
        cout << count << "  ";
    }

    return 0;
}
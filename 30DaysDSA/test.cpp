#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the size of the array : ";
    int size;
    cin >> size;
    int a[size];
    cout << "\nEnter the elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    set<int> s;
    cout << "\nInserting values in set\n ";
    for (auto i : a)
    {
        s.insert(i);
    }
    cout << "\nUnique Elements are :  ";
    for (auto it : s)
    {
        cout << it << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Enter n : ";
    cin >> n;
    for (row = n; row >= 1; row--)
    {
        for (col = n; col >= 1; col++)
        {
            cout << " ";
        }
        cout <<  1 << endl;
        cout << endl;
    }
    return 0;
}
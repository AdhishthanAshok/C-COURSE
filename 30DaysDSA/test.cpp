#include <bits/stdc++.h>
using namespace std;
void patter7(int n)
{

    for (int i = 0; i < n; i++)

    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    // patter1(n);
    // patter2(n);
    // patter3(n);
    // patter4(n);
    // patter5(n);
    // patter6(n);
    patter7(n);

    return 0;
}
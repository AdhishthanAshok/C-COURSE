#include <bits/stdc++.h>
using namespace std;

void fn(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " First" << endl;
    fn(n - 1);
}

int main()
{
    fn(3);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter size : ";
    cin >> n;
    char arr[n];
    cout << "\nEnter char values : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i] - 'a']++;
    }
    cout << "\nPrinting elements with their frequence : \n";
    for (int i = 0; i < 3; i++)
    {
        cout << char(mp[i]) << endl;
    }

    return 0;
}
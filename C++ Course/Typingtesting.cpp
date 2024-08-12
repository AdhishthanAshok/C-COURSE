// #include <bits/stdc++.h>
// using namespace std;

// vector<string> subs(string p, string up)
// {

//     if (up.empty())
//     {
//         vector<string> ans;
//         ans.push_back(p);
//         return ans;
//     }

//     char ch = up[0];
//     vector<string> left = subs(p + ch, up.substr(1));
//     vector<string> right = subs(p, up.substr(1));

//     left.insert(left.end(), right.begin(), right.end());
//     return left;
// }

// int main()
// {
//     string up = "abcdefghijklmnopqrstuvwxyz";
//     string p = "";
//     vector<string> ans = subs(p, up);
//     cout << "Total subsequences are : " << ans.size() << endl;
//     for (auto &i : ans)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void subs(string p, string up, vector<string> &result)
{
    if (up.empty())
    {
        result.push_back(p);
        return;
    }

    char ch = up[0];
    subs(p + ch, up.substr(1), result); // include the current character
    subs(p, up.substr(1), result);      // exclude the current character
}

vector<string> getAllSubsequences(string s)
{
    vector<string> result;
    subs("", s, result);
    return result;
}

int main()
{
    string up = "abcdefghijklmno";
    vector<string> ans = getAllSubsequences(up);
    cout << "Total subsequences are: " << ans.size() << endl;
    for (const auto &i : ans)
    {
        cout << i << " ";
    }

    return 0;
}

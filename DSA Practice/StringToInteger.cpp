#include<bits/stdc++.h>
using namespace std;
// #define mod 1000000

int stringToInt(string &s, int last,const int& i ){
    if(s[i] < '0' || s[i] > '9'){
        cout << "Element at index " << i << " is not an alphabet";
        return -1;
    }
    if(last == 0){
        return s[last] - '0';
    }

    int ans = stringToInt(s , last - 1, i+1);

    int lastVal = s[last] - '0';
    return (ans*10 + lastVal);
}

int main(){
    string s = "123y459";
    int last = s.length() - 1;
    int ans = stringToInt(s, last, 0);
    if(ans > 0 ){
    cout << typeid(ans).name() << " -> " << ans ;
    }
    return 0;
}
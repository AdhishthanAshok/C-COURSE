// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ; 

int main() {
    int t;
    cin >> t;
    while(t--){

    int a,b,x , y;
    cin >> a >> b >> x >> y;
    int m = a%x;
    int n = b%y;
    if(m>n){
    cout << "Chef" << endl;
    }
    else if(m < n){
    cout << "Chefina" << endl ;
    }
    else{
        cout << "Both";
    }
    }

    // int x , y;
    // cin>>x>>y;
    // cout << x /y <<endl;
    // cout << x % y <<endl;
    
    return 0;
}
#include<iostream>
using namespace std;
    int fibb(int n){
        if(n<=2) return 1;
        return fibb(n-1) + fibb(n-2);
    }

int main(){
    cout<<fibb(6)<<endl;
    cout<<fibb(7)<<endl;
    cout<<fibb(8)<<endl;

    return 0;
}
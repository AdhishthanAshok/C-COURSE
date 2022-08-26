#include<iostream>
using namespace std;

void swap(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a , b;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of a: "<<endl;
    cin>>b;
    cout<<"The value are: "<<a<<" and "<<b<<"."<<endl;
    swap(a , b);
    // cout<<"After swapping: "<<endl;
    cout<<"The new value are: "<<a<<" and "<<b<<"."<<endl;
    return 0;
}
#include<iostream>
using namespace std;

void func(int a){

    cout<<"This is exact same data type function."<<a<<endl;

}
template <class T>
void func(T b){
    cout<<"This is templated data type function."<<b<<endl;
}
int main(){
     int a;     // HERE EXACT DATA TYPE FUNCTION WILL BE CALLED.
     float b;  // HERE TEMPLATED DATA TYPE FUNCTION WILL BE CALLED. 
    cout<<"Enter the value :"<<endl;
cin>>a>>b;
    func(a);    // HERE EXACT DATA TYPE FUNCTION WILL BE CALLED.
    func(b);    // HERE TEMPLATED DATA TYPE FUNCTION WILL BE CALLED. 

    return 0;
}
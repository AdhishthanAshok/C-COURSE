#include<iostream>
using namespace std;

template<class T>

void func(T a){
    int b = a;
    b = 5;
    cout<<"The value of b is :  "<<a<<endl;
}
template <class S>

void swapp(S &a , S &b){
    S temp = a;
    a = b;
    b = temp;
}
int main(){
  func(5);
  int x , y;
  cout<<"First enter x and then enter y: "<<endl;
  cin>>x>>y;
  swapp(x , y);
  cout<<"After Swapping x and y:"<<endl;
  cout<<x<<endl<<y;
    return 0;
    getchar();
}
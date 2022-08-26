#include<iostream>
using namespace std;
class test{
   private:
   int a;
   int b;
   public:
   test(int i , int j ) :a(i) , b(j){
    cout<<"Constructor is used here "<<endl;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
   }
};
int main(){
    test adi(4 , 6);
    return 0;
}
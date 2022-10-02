#include<iostream>
using namespace std;
class test{
   private:
   int a;
   int b;
   public:

    // ****************** INITIALIZATION LIST ***************************

   test(int i , int j ) :a(i) , b(j){
    cout<<"Constructor is used here "<<endl;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
   }
};
int main(){
    int m , n ;
    cout<<"Enter the value of m and n : \n";
    cin>>m>>n;
    test adi(m ,n );
    return 0;
}
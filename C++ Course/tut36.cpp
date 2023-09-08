#include<iostream>
using namespace std;

class A {
       int a ;
       public:


       void setdata(int a){
        this -> a = a;
       }
     
       void getdata(void){
        cout<<"The value of a is : "<< a <<endl;
       }
       //  ****************** Here we make use of class as a variable and it is same as the above  ******************* 

       A & setdata1(int a){
        this -> a = a;
        return *this;
       }

       void getdata1(void){
        cout<<"The value of a is : "<< a <<endl;
       }
};

int main(){
    A a;
    a.setdata(5);
    a.getdata();

    //***************** Bs m ecause of line 18 declaration we can use setdata and getdata in one go....
    //*****************        because setdata is acting like a variable here  ********************

    a.setdata1(7).getdata1();
    return 0;
}
#include<iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend void exchange(c1 & , c2 &);
     public:
      void setdata(int a){
        val1 = a;
      }

      void displaydata(void)
      {
        cout<<val1<<endl;
      }
};

class c2
{
    int val2;
    friend void exchange(c1 & , c2 &);
     public:
      void setdata(int b){
       val2 = b;
      }

      void displaydata(void)
      {
        cout<<val2<<endl;
      }
};

void exchange(c1 & x , c2 & y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){

    c1 a1;
    a1.setdata(55);
    cout<<"The value of x private variable before exchanging is: ";
    a1.displaydata();

    c2 b1;

    b1.setdata(11);
    cout<<"The value of y private variable before exchanging is: ";
    b1.displaydata();

    exchange(a1 , b1);

    cout<<"The value of x private variable after exchanging is: ";
    a1.displaydata();
    cout<<"The value of y private variable after exchanging is: ";
    b1.displaydata();
    
    return 0;
}
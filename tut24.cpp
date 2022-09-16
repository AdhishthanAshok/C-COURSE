
  // ************************** COPY CONSTRUCTER **************************

#include<iostream>
using namespace std;

class number 
{
    int a ;
    public:
           number(){}
           number(int num){
            a = num;
           }
           number(number &obj){
            cout<<"Copy constructor is working here"<<endl;
            a = obj.a;
           }

    void display(){
        cout<<"The number is: "<<a<<endl;
    }

};
int main(){
    number x(5) , y(16) , z(99);
    x.display();
    y.display();
    z.display();

    number z2(x);
    z2.display();

    number z3(y);
    z3.display();

    number z4(z);
    z4.display();
    return 0;
}
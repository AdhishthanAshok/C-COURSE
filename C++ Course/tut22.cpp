#include<iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;
    public: 
     simple(int a , int b , int c){
        data1 = a;
        data2 = b;
        data3 = c;
     }

     void printnumber();
};
void simple :: printnumber(){
    cout<<"The value of data1 is "<<data1<<" ,the value of data2 is "<<data2<<" and the value of data3 is "<<data3<<" ."<<endl;
}
int main(){
    simple s(7 , 8 , 9);
    s.printnumber();
    
    return 0;
}

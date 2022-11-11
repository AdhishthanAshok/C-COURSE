#include<iostream>
using namespace std;


int moneyrecieved(int salary , float factor = 1.08)
{
    return salary*factor;
}

int main(){
    int money;
    cout<<"Enter the money: "<<endl;
    cin>>money;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;
    cout<<"The money is: "<<money<<endl;
    cout<<"Salary recieved by employee is "<<moneyrecieved(money , 1.2)<<" ."<<endl;
    return 0;
    
}
#include<iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float rate;
    float returnvalue;
    public:
    bankdeposit(){}
    bankdeposit(int p , int y , float r);
    bankdeposit(int p , int y , int r);
     void show();
};

bankdeposit :: bankdeposit(int p , int y , int r){
     principal = p;
     years = y;
     rate =  (float(r)/100);
     returnvalue = principal;
     for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+rate);
     }
}

bankdeposit :: bankdeposit(int p , int y , float r){
     principal = p;
     years = y;
     rate = r;
     returnvalue = principal;
     for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+rate);
     }
}


void bankdeposit :: show(){
    cout<<"The principal amount is: "<<principal<<" and after "<<years<<" years, "<<" with "<<rate<<" rate."<<" The amount is "<<returnvalue<<"."<<endl;
}

int main(){
    bankdeposit bd1 ,bd2 , bd3;
    int p , y;
    float r;
    int R; 
    cout<<"enter the values of p y and r : "<<endl;
    cin>>p>>y>>r;
    bd1 = bankdeposit(p , y , r);
    bd1.show();
    cout<<"enter the values of p y and r : "<<endl;
    cin>>p>>y>>R;
    bd2 = bankdeposit(p , y , R);
    bd2.show();
    return 0;
}
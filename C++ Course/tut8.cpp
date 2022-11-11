#include<iostream>
using namespace std;
/****************************COMMENTED OUR METHOD IS ALSO CORRECT***********************/
// int sum(int , int);
int sum(int a , int b)
{
    int c;
    c = a + b;
    return c;
}
int main(){
    
    int num1 , num2;
    cout<<"enter value of num1: "<<endl;
    cin>>num1;
    cout<<"enter value of num2: "<<endl;
    cin>>num2;
    cout<<"the sum is: "<<sum(num1 , num2);
    return 0;
}

// int sum(int a , int b)
// {
//     int c;
//     c = a + b;
//     return c;
// }
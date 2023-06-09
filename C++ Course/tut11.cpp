
/****************************FACTORIAL*******************/

// #include<iostream>
// using namespace std;

// int factorial(int n)
// {
//     if(n<=1){
//         return 1;
//     }
//      return n * factorial(n-1);
// }

// int main(){
//     int a ;
//     cout<<"Enter the number for it's factorial: "<<endl;
//     cin>>a;
//     cout<<"The factorial value is: "<<factorial(a);
//     return 0;
// }

/******************************FIBONACCI SERIES*************************/

#include<iostream>
using namespace std;

int fib(int n)
{   
    if(n<2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int main(){
    int a;
    cout<<"enter the nth term: "<<endl;
    cin>>a; 
    cout<<"The value's at nth term is "<<endl;
    for (int i = 1; i <= a-1; i++)
    {
        cout<<fib(i)<<" , ";
    }
        cout<<fib(a)<<" . ";
    return 0;
}
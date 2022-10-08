#include<iostream>
using namespace std;

int sum(int a , int b , int c)
{
    cout<<"cube volume:"<<endl;
    return a * b * c;
}

int sum(int x , int y , int z , int q )
{
    cout<<"Cuboid volume:"<<endl;
    return x * y * z * q;
}


int main(){
    // int a , b , c;
    // cout<<"Enter values of a ,b ,c: "<<endl;
    // cin>>a;
    // cin>>b;
    // cin>>c;

    cout<<"using first fuction: "<<sum(3,3,3)<<endl;
    cout<<"using second fuction: "<<sum(3,4,8,5)<<endl;
    
    return 0;
}
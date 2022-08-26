#include<iostream>
using namespace std;

int main(){
    // int a =3;
    // int* b = &a;
    // cout<<"Adress of a from &a is: "<<&a<<endl;

    // cout<<"Adress of a form *b is: "<<*b;

    int marks[] = {73,78,87,85,95};

    for (int i = 0; i < 5; i++)
    {
        cout<<"The marks of student marks " << i <<" in maths is: "<<marks[i]<<endl;
    }

    int* p= marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    // cout<<"The Value of *p is: "<<*p<<endl;
    // cout<<"The Value of *(p+1) is: "<<*(p+1)<<endl;
    // cout<<"The Value of *(p+2) is: "<<*(p+2)<<endl;
    // cout<<"The Value of *(p+3) is: "<<*(p+3)<<endl;

    return 0;
}
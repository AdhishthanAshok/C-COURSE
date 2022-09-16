#include <iostream>
using namespace std;

class complex;

class calculator
{   public: 
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex , complex);
    int sumcompcomplex(complex , complex);
};

class complex
{
    int a, b;
    friend int calculator :: sumrealcomplex(complex , complex);
    friend int calculator :: sumcompcomplex(complex , complex);

    public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void sumofdata(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void difference(complex o1, complex o2)
    {
        a = o1.a - o2.a;
        b = o1.b - o2.b;
    }

    void printnumber()
    {
        cout << "The value of complex number after taking action is: " << a << " + " << b << "i." << endl;
    }
};

int calculator :: sumrealcomplex(complex o1, complex o2){
    return (o1.a + o2.a);
}
int calculator :: sumcompcomplex(complex o1, complex o2){
    return (o1.b + o2.b);
}

int main()
{   complex o1 , o2;
    o1.setdata(2 , 5);
    o1.printnumber();

    o2.setdata(5 , 6);
    o2.printnumber();

    calculator calc;
    int res = calc.sumrealcomplex( o1 , o2);
    cout<<"The sum of real part is: "<<res<<endl;
    int res1 = calc.sumcompcomplex( o1 , o2);
    cout<<"The sum of imaginary part is: "<<res1<<endl;
    return 0;
}
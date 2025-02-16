#include <bits/stdc++.h>
using namespace std;

class Show
{
public:
    void getData(int x)
    {
        cout << "x : " << x << endl;
    }
    void getData(double y)
    {
        cout << "y : " << y << endl;
    }

    virtual void checking()
    {
        cout << "This is base class..\n";
    }
};

class Derived : public Show
{
public:
    void checking() override
    {
        cout << "\nThis is derived class..\n";
    }
};

int main()
{
    Show obj;
    Derived obj1;
    obj.checking();
    obj1.checking();
}
#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person()
    {
        cout << "\nBase class constructor.. \n";
    }
    ~Person()
    {
        cout << "\nBase class destructor.. \n";
    }
};

class Student : public Person
{
public:
    int rollNo;

    void getInfo()
    {
        cout << "Here are all the details separated by a space -> " << name << " " << age << " " << rollNo;
    }

    Student()
    {
        cout << "\nDerived class constructor.. \n";
    }
    ~Student()
    {
        cout << "\nDerived class destructor.. \n";
    }
};

int main()
{
    Student a;
    a.name = "Adi";
    a.age = 21;
    a.rollNo = 1;

    a.getInfo();
}
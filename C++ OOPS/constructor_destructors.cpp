#include <iostream>
#include <string>
using namespace std;

// Destructors deletes the object in reverse order, means firstly created obj will be deleted at last and vice versa.

class Student // Encapsulation Example -> Wrapping of data and member functions in a single unit called Class.
{
public:
    string name;
    int className;

    void setName(string name)
    {
        this->name = name;
    }

    void setClass(int className) // setter function
    {
        this->className = className;
    }

    void getDetails() // getter function
    {
        cout << "Student Name -> " << name;
        cout << "\n";
        cout << "Student Class -> " << className;
    }

    Student() // Constructor , Same name member function which will be intialized automatically when a new object is created
    {
        cout << "\nNew Student is Created\n";
    }

    ~Student() // Destructors, Same name member functoin, which will automatically deleted the object, when it's done computing
    {
        cout << "\nStudent Data is automatically deleted";
    }
};

class advanceConstructor
{
private:
    string name;
    string salary;

public:
    advanceConstructor(string name, string salary)
    {
        this->name = name;
        this->salary = salary;
    }

    void getDetails()
    {
        cout << "\nName : " << name << "\n";
        cout << "Salary : " << salary << "\n";
    }
    ~advanceConstructor()
    {
        cout << "\nObject is deleted for 2nd class\n";
    }
};

int main()
{

    advanceConstructor obj("Adhishthan Ashok", "500000");
    obj.getDetails();
    // cout << "\nSize of Obj Object : " << sizeof(obj);

    Student Adi;
    Adi.setName("Adhishthan Ashok");
    Adi.setClass(12);
    // cout << "\nSize of Adi Object : " << sizeof(Adi);
    cout << "\n";
    Adi.getDetails();

    advanceConstructor obj1("Ashok", "100000");
    obj1.getDetails();
    // cout << "\nSize of Obj Object : " << sizeof(obj1);

    Student Adi1;
    Adi1.setName(" Ashok");
    Adi1.setClass(1);
    // cout << "\nSize of Adi Object : " << sizeof(Adi);
    cout << "\n";
    Adi1.getDetails();
}
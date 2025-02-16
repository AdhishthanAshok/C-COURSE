#include <iostream>
#include <string>
using namespace std;

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

int main()
{

    Student Adi;

    Adi.setName("Adhishthan Ashok");
    Adi.setClass(12);

    Adi.getDetails();
}
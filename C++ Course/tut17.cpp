#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid()
    {
        salary = 27500;
        cout << "Enter the ID: " << endl;
        cin >> id;
    }

    void getid()
    {
        cout << "The id of the emplyoee is: " << id;
    }
};

int main()
{
    employee apple[5];
    for (int i = 0; i < 5; i++)
    {
        cout << endl;
        apple[i].setid();
        apple[i].getid();
    }

    return 0;
}
#include <iostream>
using namespace std;

class base1
{
protected:
    int baseint1;

public:
    void getbaseint1(int a)
    {
        baseint1 = a;
    }
};

class base2
{
protected:
    int baseint2;

public:
    void getbaseint2(int a)
    {
        baseint2 = a;
    }
};
class base3
{
protected:
    int baseint3;

public:
    void getbaseint3(int a)
    {
        baseint3 = a;
    }
};

class derieved : public base1, public base2, public base3
{    
public:
  void display(){
    cout << "The value of base 1 is :" << baseint1 << endl;
    cout << "The value of base 2 is :" << baseint2 << endl;
    cout << "The value of base 3 is :" << baseint3 << endl;
    cout << "The sum is: "<< baseint1 + baseint2 + baseint3 <<endl;
   }
};
int main()
{
  derieved adi;
   adi.getbaseint1(15);
   adi.getbaseint2(10);
   adi.getbaseint3(20);
   adi.display();
    return 0;
}
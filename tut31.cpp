#include <iostream>
using namespace std;

/* student => test
   student => sports
   test => result
   test => result
*/

class student
{
protected:
    int rollnumber;

public:
    void setrollnumber(int r)
    {
        rollnumber = r;
    }
    void getrollnumber(void)
    {
        cout << "Student's roll number is: " << rollnumber << endl;
    }
};

class test : virtual public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void getmarks(void)
    {
        cout << "Marks obtanined in maths are :" << maths << endl;
        cout << "Marks obtanined in physics are :" << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    int score;

public:
    void setscore(int sc)
    {
        score = sc;
    }
    void getscore(void)
    {
        cout << "Score scored in the match is: " << score << endl;
    }
};

class result : public test, public sports
{
protected:
    int total;

public:
    void display(void)
    {
        total = maths + physics + score;
        getrollnumber();
        getmarks();
        getscore();
        cout << "The total marks + score got is " << total << endl;
    }
};
int main()
{
    result adi;
    adi.setrollnumber(45);
    adi.setmarks(99, 96);
    adi.setscore(5);

    adi.display();
    return 0;
}
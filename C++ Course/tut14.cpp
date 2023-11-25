#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void entering(void);
    void checking(void);
    void displaying(void);
    void converting(void);
};

void binary :: entering()
{
    cout << "Enter a number: " << endl;
    cin >> s;
}

void binary ::checking()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Number is not Binary.";
            exit(0);
        }
    }
    cout<<endl;
}

void binary ::converting()
{   cout<<"The number after converting into 1's compliment is: "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            cout << "1";
        }
        else
            cout << '0';
    }
    cout<<endl; 
}

void binary ::displaying()
{    
    cout<<"The number entered is: "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.entering();
    b.checking();
    b.displaying();
    b.converting();                         
    b.displaying();
    return 0;
}
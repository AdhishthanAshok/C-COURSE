#include<iostream>
using namespace std;

class employee
{
    int id;
    static int count;

    public:
        void setdata(){
            cout<<"Enter the id of the Employee: "<<endl;
            cin>>id;
            count++;
        }
        void getdata(){
            cout<<"The id of the employee is: "<<id<<" and this employe no. is: "<<count<<endl;
        }

    static void getcount(){
        cout<<"The number of count is: "<<count<<endl;
    }    
};

int employee :: count;  // default value is 0 in static variable.

int main(){
    employee adi , sadi , dadi;
     adi.setdata();
     adi.getdata();
    employee::getcount();
 
     sadi.setdata();
     sadi.getdata();
    employee::getcount();
    
     dadi.setdata();
     dadi.getdata();
    employee::getcount();
    return 0;
}
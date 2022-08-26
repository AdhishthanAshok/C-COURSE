#include <iostream>
using namespace std;

// typedef struct student
// {
//     int id;
//     float rollno_;
//     char section;

// }st;

// union student
// {
//     int id;
//     float rollno_;
//     char section;

// };


int main()
{
    // st adhishthan;
    // adhishthan.id = 8;
    // adhishthan.rollno_ = 30011;
    // adhishthan.section = 'A';

    // cout<<"ID of student name Adhishthan is: "<<adhishthan.id<<endl;
    // cout<<"Roll Number of student name Adhishthan is: "<<adhishthan.rollno_<<endl;
    // cout<<"Section of student name Adhishthan is: "<<adhishthan.section<<endl;

    // union student adhishthan;
    //  adhishthan.id = 2;
    //  adhishthan.rollno_ = 30;
    //  adhishthan.section = 'A';

    //  cout<<"ID of student name Adhishthan is: "<<adhishthan.id<<endl;
    //  cout<<"Roll Number of student name Adhishthan is: "<<adhishthan.rollno_<<endl;
    //  cout<<"Section of student name Adhishthan is: "<<adhishthan.section<<endl;
     enum weekdays {Mon , tues, wed , thurs, fri, sat, sunday};
     weekdays m1 =  Mon;
     weekdays m2 =  tues;
     weekdays m3 =  wed;
     weekdays m4 =  thurs;
     weekdays m5 =  fri;
     weekdays m6 =  sat;
     weekdays m7 =  sunday;

     for (int i = 0; i < 7; i++)      
     {
        cout<<"The day number on "<< i <<" is: "<< weekdays (i)<<endl;
     }
     
    return 0;
}
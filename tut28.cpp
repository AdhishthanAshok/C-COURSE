 /***********************   MULTILEVEL INHERITENCE ****************/ 

 //     COMMENTED SECTION IS GIVING GARBAGE VALUE.

#include<iostream>
using namespace std;
class student
{
    protected: 
        int rollnumber ;
    public:
       void setrollnumber(int);
       void getrollnumber(void);
    //    void rollnumberis(int);
};
 void student :: setrollnumber(int r){
    rollnumber = r; 
 }
 void student :: getrollnumber(){
    cout<<"Roll number of the student is: "<<rollnumber<<endl;
 }
//   void student :: rollnumberis(int r)
//   {
//     r = rollnumber;
//     cout<<"The roll no. is "<<rollnumber<<endl;
//   }

 class marks : public student
 {
    protected:
    float maths ;
    float physics ;
    public:  
    void setmarks(float , float);
    void getmarks();
 };
  
  void marks :: setmarks(float m1 , float m2){
   maths = m1;
   physics = m2;
  }
  
  void marks :: getmarks(){
    cout<<"The marks obtained in maths are: "<<maths<<endl;
    cout<<"The marks obtained in physics are: "<<physics<<endl;
  }

  class result : public marks{
     protected: 
     int percentage;
     public:
     void display(void);
  };
  void result :: display(){
    cout<<"The percentage obtained in the result is: "<<(maths + physics)/2<<"%"<<endl;
  }

int main(){
    result adi;
    adi.setrollnumber(11);
    adi.getrollnumber();
    // adi.rollnumberis(11);
    adi.setmarks(94 , 92);
    adi.getmarks();
    adi.display();
    return 0;
}
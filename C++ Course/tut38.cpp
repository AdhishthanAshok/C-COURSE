#include<iostream>
using namespace std;

class base {
  public:
  int var_base = 1;

    /* HERE THE VIRTUAL FUNCTION HELPS TO RUN DISPLAY FUNC OF DERIVED CLASS EVEN IF POINTER OF 
    BASE CLASS IS POINTING TO DERIVED CLASS OBJECT .   */

     virtual void display(){
        cout<<"The value of base class 1 obj is : "<<var_base<<endl;
      }
};
class derived : public base{
  public:
  int var_derived = 2;
      void display(){
        cout<<"The value of base class 1 obj is : "<<var_base<<endl;
        cout<<"The value of derived class 1 obj is : "<<var_derived<<endl;
      }
};

int main(){


    base *base_pointer;
    base obj_base;
    derived obj_derived;
    
    base_pointer = &obj_derived;

    base_pointer->var_base;
    base_pointer->display();
    return 0;
}

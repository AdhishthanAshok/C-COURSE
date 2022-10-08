#include<iostream>
using namespace std;

class base {
       public:
       int var_base;
       void display(){
        cout<<"The value of base class var_base is : "<<var_base<<endl;
       } 
};
class derived : public base {
       public:
       int var_derived;
       void display(){
        cout<<"The value of base class var_base is : "<<var_base<<endl;
        cout<<"The value of base class var_derived is : "<<var_derived<<endl;
       } 

};
int main(){
    base *base_pointer;
    derived obj_derived;
    base_pointer = &obj_derived;
    
    base_pointer->var_base = 34;
    // base_pointer->var_derived = 74;         // IT WILL THROW AN ERROR MESSAGE : CAUSE IT'S NOT POSSILBE.
    base_pointer->display();


    derived *derived_pointer;
    base obj_base;
   // derived_pointer = &obj_base;               // NOT POSSIBLE BECAUSE OF INVALID CONVERSION FROM BASE* TO DERIVED
     derived_pointer = &obj_derived; 

     derived_pointer->var_derived = 89;
    //   derived_pointer->var_base = 89;      // IT WILL GIVE GARBAGE VALUE IN DERIVED DISPLAY FUNCTION.
    derived_pointer-> display();

    return 0;
}
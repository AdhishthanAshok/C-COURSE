#include<iostream>
using namespace std;
class base1 {
    
     int data1;
     public:
     base1(int i){
     data1 = i;
     cout<<"Here constructor of base 1 is used"<<endl;   
      }
     void printnumberbase1(void){
        cout<<"THe value of data1 is: "<<data1<<endl;
     } 

};
class base2 {
    
     int data2;
     public:
     base2(int i){
     data2 = i;
     cout<<"Here constructor of base 2 is used"<<endl;   
      }
     void printnumberbase2(void){
        cout<<"THe value of data2 is: "<<data2<<endl;
     } 

};

class derived : public base2 , public base1
{
    protected:
    int derived1;
    int derived2;
    public:
     derived(int a , int b , int c , int d) : base1(a) , base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Here Derived constructor is used"<<endl; 
    }
    void printnumberderived(void){
        cout<<"The value of derived 1 is: "<< derived1 <<endl;
        cout<<"The value of derived 2 is: "<< derived2 <<endl;
    }
};
int main(){
    derived adi(1 , 2 , 3 ,4);
    // adi.derived(1 , 2 , 3 ,4);
    adi.printnumberbase1();
    adi.printnumberbase2();
    adi.printnumberderived();
    return 0;
}
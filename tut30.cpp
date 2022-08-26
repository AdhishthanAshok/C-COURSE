#include<iostream>
using namespace std;
class base1{
   protected:
     void greet(void){
         cout<<"HEllO"<<endl;
     }
};
class base2{
   protected:
     void greet(void){
         cout<<"kya haal h"<<endl;
     }
};

class derieved : public base1 , public base2{
    protected:
    int a;
     public:
      void greet(){
     base1 :: greet();
     base2 :: greet();
       cout<<"Chal bey"<<endl;
      }
};
int main(){
    derieved adi;
    adi.greet();
    // adi.greet();
    
    return 0;
}
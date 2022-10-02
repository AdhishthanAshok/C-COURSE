#include<iostream>
using namespace std;

// THIS IS THE EXAMPLE OF THE DEFAULT TEMPLATE . 

template<class T1 = int , class T2 = float>
class default_class{
      T1 n1;
      T2 n2;
      public:

      default_class(T1 a , T2 b){
       n1 = a;
        n2 = b;
      }

      void display(void){
        cout<<"value 1 : "<<n1<<endl;
        cout<<"value 2 : "<<n2<<endl;
      }
};

int main(){
    default_class<> wish('G' , 4.21);
    wish.display();
    return 0;
}
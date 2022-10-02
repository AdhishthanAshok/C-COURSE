#include<iostream>
using namespace std;

template<class T1 , class T2>
class greet{
      T1 morning;
      T2 night;
      public:

      greet(T1 a , T2 b){
        morning = a;
        night = b;
      }

      void display(void){
        cout<<"Morning : "<<morning<<endl;
        cout<<"Night : "<<night<<endl;
      }
};

int main(){
    greet<char , float> wish('G' , 4.21);
    wish.display();
    return 0;
}
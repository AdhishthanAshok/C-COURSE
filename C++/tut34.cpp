#include<iostream>
using namespace std;

class arrow{
      int data;
      public:
      void arrow_data(int i){
          data = i;
      }
      void givedata(void){
      cout<<"The value of data is: "<<data<<endl;
      }
};
int main(){
    int a = 706;
    int *p = &a;
    cout<< "*************  REPRESENTATION OF POINTER   *********************";
    cout<<endl;
    cout<<"Value of a is : "<< *p <<endl;  // correct value
    cout<<"Value of a is : "<< a <<endl;   // correct value

    cout<<"Address of a is : "<< p <<endl;   // garbage value 
    cout<<"Address of a is : "<< &p <<endl;  // garbage value
    cout<<"Address of a is : "<< &a <<endl;  // garbage value

    cout<<endl;
    /////////////////////////////////////////////////////////////////////////////////////

   cout<< "*************  REPRESENTATION OF NEW OBJECT MAKING IN POINTER   *********************";
    cout<<endl;
    int *ptr = new int(60);
    cout<<"Value of a is : "<< *ptr <<endl;  // correct value

    cout<<endl;

    char *ptrchar = new char('d');
    cout<<"Value of a is : "<< *ptrchar <<endl;  // correct value

    cout<<endl;
    /////////////////////////////////////////////////////////////////////////////////////
    
   cout<< "*************  REPRESENTATION OF ARROW OPERATOR IN POINTER   *********************";
    cout<<endl;
    arrow *ptr_arrow = new arrow;
    int enter_arrow;
    cout<<"Enter the value for arrow: "<<endl;
    cin>>enter_arrow;
    ptr_arrow->arrow_data(enter_arrow);
    ptr_arrow->givedata();
    
    cout<<endl;

    
    /////////////////////////////////////////////////////////////////////////////////////

   cout<< "*************  REPRESENTATION OF ARRAY POINTER   *********************";
    cout<<endl;

    int *arr = new int[4]{15 , 42 , 53 , 74};
    delete arr;

    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    cout<<"The value of arr one by one is: "<<arr[0]<<endl;
    cout<<"The value of arr one by one is: "<<arr[1]<<endl;
    cout<<"The value of arr one by one is: "<<arr[2]<<endl;
    cout<<"The value of arr one by one is: "<<arr[3]<<endl;
    return 0;
}
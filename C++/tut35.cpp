#include<iostream>
using namespace std;

class shopitem
{   int id ;
    float price ;
    public:

      void setdata(int a , float b){
                 id = a;
                 price = b;
      }  

      void getdata(void){
        cout<<"The id of the item is: "<< id <<endl;
        cout<<"The price of the item is: "<< price <<endl;
      }

};

int main(){
    int size = 3;
    shopitem *ptr = new shopitem[size];
    shopitem *ptritem = ptr;
      int p ;
      float q ;
   for (int i = 0; i < size; i++)
   {
       cout<<"Enter the id and price of the item : "<< i + 1 <<endl;
       cin>>p>>q;
       ptr->setdata(p , q);
       ptr++;
   }

    for (int i = 0; i < size; i++)
    {
        cout<<"The item number : "<< i + 1 <<endl;
        ptritem->getdata();
        ptritem++;
    }
    return 0;
}
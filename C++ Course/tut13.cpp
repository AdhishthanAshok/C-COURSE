#include<iostream>
using namespace std;

class animal
{
    private: 
        int name = 7, breed = 8;

    public:
        int color , height , sound;
    
    void setdata(int name1 , int breed2);
    void getdata(){
    
        cout<<"The characterstic color of the animal is: "<<color<<endl;
        cout<<"The characterstic height of the animal is: "<<height<<endl;
        cout<<"The characterstic sound of the animal is: "<<sound<<endl;
        cout<<"The characterstic name of the animal is: "<<name<<endl;
        cout<<"The characterstic breed of the animal is: "<<breed<<endl;

    }
};

void animal :: setdata(int name1 , int breed2)
{
    name1 = name;
    breed2 = breed;
};


int main(){
    animal dog;
    dog.color = 1 ;
    dog.sound = 0 ;
    dog.height = 2;
    dog.setdata(7,8);
    dog.getdata();
    return 0;
}

   /************************       MULTILEVEL INHERITANCE     ***********************/
 
#include<iostream>
using namespace std;

class tenth
{   int marks;
    public:
    void numbers(int num){
       marks = num ;
       cout<<"I got "<<num<<" in my 10th exam."<<endl;
    }
};

class eleventh : public tenth
{

};

class twelth : public eleventh{
    public:
    void nature(void){
    cout<<"That's why i m a good student "<<endl;
    }
};

int main(){
    twelth student;
    int num;
     cout<<"Enter the marks you obtained in class 10th: "<<endl;
     cin>>num;
    student.numbers(num);
    student.nature();
    return 0;
}
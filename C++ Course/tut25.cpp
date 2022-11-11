
    // *************************    INHERITANCE ******************************

#include<iostream>
using namespace std;
class employee{
    
    public:
    int id;
    int salary = 34;

    employee(){}
    

};
/*   SYNTAX OF INHERITANCE IS :
   
    class {{DERIEVED-CLASS-NAME}} : {{VISIBILITY-MODE}} {{BASE-CLASS-NAME}}
    {
        MEMBERS/METHODS/ETC.
    }

 NOTE : DEFAULT VISIBILITY MODE IS PRIVATE.
        1.    IN PRIVATE MODE ==> BASE CLASS PUBLIC MEMBERS INHERITS THE PRIVATE MEMBERS OF DERIEVED CLASS
        2.    IN PUBLIC MODE ==> BASE CLASS PUBLIC MEMBERS INHERITS THE PUBLIC MEMBERS OF DERIEVED CLASS
        3.    PRIVATE MEMBERS OF BASE CLASS ARE NEVER INHERITED

*/
class programmer : public employee{
    public:
    int languagecode = 22;
    programmer(int inpid){
            id = inpid;
    }
    void getdata(){
        cout<<id<<endl;
    }

};
int main(){
    employee adi;
    cout<<"Salary is : "<<adi.salary<<endl;
    programmer adish(78);
    cout<<adish.languagecode<<endl;
    adish.getdata();
    return 0;
}
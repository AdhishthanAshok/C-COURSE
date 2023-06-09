#include<iostream>
#include<istream>
#include<string>
#include<fstream>
#include<stdlib.h>
using namespace std;

void  login();
void  registration();
void  forgot();

 main(){
    int choice;
    system("cls");
    cout<<"\t\t\t***********  LOG IN OR CREATE YOUR ACCOUNT ***********\n" ;
    cout<<"\n\n\t\t\t1-> Log-in"<<endl;
    cout<<"\n\t\t\t2-> Registration"<<endl;
    cout<<"\n\t\t\t3-> Forgot Password or Username"<<endl;
    cout<<"\n\t\t\t4-> Exit"<<endl;
    cout<<"\n\n\t\t\tEnter your choice :  ";
    cin>>choice;
    switch(choice)
    {
        case 1:{
                login();
                break;
        }
        case 2:{
                registration();
                break;
        }
        case 3 :{ 
                forgot();
                break;  
        }      
        case 4 : {
            cout<<"\n\n\t\t\t************ End of Program ************\n";
            exit(choice);
        }
        case 5 :{
                cout<<"\n\n\t\t\t***********Thanks for using the login page **************\n";
                break;
        }
        default:{
                cout<<"\n\n\t\t\t    Sorry, wrong choice selected !!!  Select again ....\n" ; 
                main();
        }   
    }
   
}

void checkpassword(string& password) 
{ 
    int n = password.length();      
    bool hasLower = false, hasUpper = false, hasDigit = false; 
  
    for (int i = 0; i < n; i++) { 
        if (islower(password[i])) 
            hasLower = true; 
        if (isupper(password[i])) 
            hasUpper = true; 
        if (isdigit(password[i])) 
            hasDigit = true; 
    } 
  
    // Displaying the strength of password 
    
    cout << "\n\t\t\tStrength of password you have entered is :-"; 
    
    if ( hasUpper && hasDigit && hasLower && (n >= 6)) // considering a strong must be of length 6 or more
        cout << "Strong" << endl; 
    else if ((hasLower || hasUpper) && hasDigit && (n >=6)) 
        //when at least a lower case or uppercase is used along with digit
        cout << "Moderate" << endl; 
    else
        cout << "Weak" << endl; 
}
void registration(){
    system("cls");
    cout<<"\n\t\t\t                  |--------------------------------------------------------------------|"<<endl;
    cout<<"\t\t\t                  |     ******************      Create your account  ***************** |"<<endl;
    cout<<"\t\t\t                  |--------------------------------------------------------------------|"<<endl;
    string username , password;
    cout<<"\n\t\t\tEnter the username : ";
    cin>>username;
    cout<<"\t\t\tEnter the password : ";
    cin>>password;
    checkpassword(password);
    ofstream reg("Details.txt" , ios::app);
    reg<<username<<' '<<password<<endl;
    cout<<"\n\n\t\t\tCongratulations !!!! Registration is successfull. \n\n";
    system("PAUSE\n");
    main();
}


void login(){
    int exist;
    string user , password , i , j;
    system("cls");
     cout<<"\n\t\t\t                  |--------------------------------------------------------------------|"<<endl;
     cout<<"\t\t\t                  |     ****************  Log-in to your account ****************      |"<<endl;
     cout<<"\t\t\t                  |--------------------------------------------------------------------|"<<endl;
     cout<<"\n\n\t\t\tEnter the username : ";
    cin>>user;
    cout<<"\n\n\t\t\tEnter the password : ";
    cin>>password;

    ifstream input("Details.txt");
    
    while(input>>i>>j)
    {
        if(i == user && j == password){
            exist = 1;
        }
    }
    input.close();
    if(exist == 1){
        cout<<"\n\n\t\t\tLog in Successfull !!!! \n\n\t\t\tWelcome : "<<user<<endl<<endl;
        system("PAUSE");
        main();
    }
    else{
        cout<<"\n\n\t\t\tLog-in not successfull \n\n";
        system("PAUSE");
        main();
    }
}

  void forgot(){
    int ch;
    system("cls");
    cout<<"\n\n\t\t\t 1-> Search your account by Username : \n";
    cout<<"\n\t\t\t 2-> Search your account by Password : \n";
    cout<<"\n\t\t\t 3-> Go to Main Menu \n";
    cout<<"\n\n\t\t\tEnter your choice : ";
    cin>>ch;

    switch(ch){
        case 1:
             {   int ex = 0;
                string searchuser , su,sp;
                cout<<"\n\n\t\t\tEnter your username you remembered : ";
                cin>>searchuser;

                ifstream searchu("Details.txt");
                while(searchu>>su>>sp){
                    if(su == searchuser){
                            ex = 1;
                            break;
                    }
                }
                searchu.close();
                if(ex==1){
                    cout<<"\n\n\t\t\tCongrats !! Account has been found .\n";
                    cout<<"\n\n\t\t\tYour password is --> "<<sp << endl << endl;
                system("PAUSE");
                main();
                }
                else{
                    cout<<"\n\n\t\t\tSorry Account not found .\n\n";
                    system("PAUSE");
                main();
                }
                break;
             }
        case 2:
        {
               int exi = 0;
               string searchpass , su2,sp2;
                cout<<"\n\t\t\tEnter your Password you remembered : ";
                cin>>searchpass;

                
                ifstream searchp("Details.txt");
                while(searchp>>su2>>sp2){
                    if(sp2 == searchpass){
                            exi = 1;
                    }
                }
                searchp.close();
                if(exi==1){
                    cout<<"\n\t\t\tCongrats !! Account has been found .\n";
                    cout<<"\n\t\t\tYour Username is --> "<<su2;
                    cout<<"\n\t\t\tYour Password is --> "<<sp2 << endl <<endl;
                system("PAUSE");
                main();
                }
                break;
        }
        case 3 : {
                main();
                break;
        }
    default : 
    {
         cout<<"\n\t\t\tSorry wrong choice enter again : \n\n";
        system("PAUSE");
         forgot();
    }
  }  
  }


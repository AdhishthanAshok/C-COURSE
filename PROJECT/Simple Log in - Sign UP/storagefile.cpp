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
    cout<<"\t\t***********  LOG IN OR CREATE YOUR ACCOUNT ***********\n" ;
    cout<<"1-> Log-in"<<endl;
    cout<<"2-> Registration"<<endl;
    cout<<"3-> Forgot Password or Username"<<endl;
    cout<<"4-> Exit"<<endl;
    cout<<" \n       Enter your choice"<<endl;
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
            cout<<"************ End of Program ************";
            exit(choice);
        }
        case 5 :{
                cout<<"\t\t***********Thanks for using the login page **************\n";
                break;
        }
        default:{
                cout<<"\t\t    Sorry, wrong choice selected !!!  Select again ...." ; 
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
    
    cout << "\nStrength of password you have entered is :-"; 
    
    if ( hasUpper && hasDigit && hasLower && (n >= 6)) // considering a strong must be of length 6 or more
        cout << "Strong" << endl; 
    else if ((hasLower || hasUpper) && hasDigit && (n >=6)) 
        //when at least a lower case or uppercase is used along with digit
        cout << "Moderate" << endl; 
    else
        cout << "Weak" << endl; 
}
void registration(){
    string username , password;
    system("cls");
    cout<<"\n                  |--------------------------------------------------------------------|"<<endl;
    cout<<"                  |     ********************     Create your account  **************** |"<<endl;
    cout<<"                  |--------------------------------------------------------------------|"<<endl;
    string user;
    cout<<"Enter the username : \n";
    cin>>username;
    cout<<"Enter the password : \n";
    cin>>password;
    checkpassword(password);
    system("\nPAUSE\n");
    ofstream reg("Details.txt" , ios::app);
    reg<<username<<' '<<password<<endl;
    system("cls");
    cout<<"\n\nCongratulations !!!! Registration is successfull. \n\n";
    main();
}


void login(){
    int exist;
    string user , password , i , j;
    system("cls");
     cout<<"\n                  |--------------------------------------------------------------------|"<<endl;
     cout<<"                  |     ****************  Log-in to your account ****************      |"<<endl;
     cout<<"                  |--------------------------------------------------------------------|"<<endl;
     cout<<"\nEnter the username : \n";
    cin>>user;
    cout<<"\nEnter the password : \n";
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
        cout<<"Welcome "<<user<<endl;
        cin.get();
        cin.get();
        main();
    }
    else{
        cout<<"\nLog-in not successfull \n";
         cin.get();
        cin.get();
        main();
    }
}

  void forgot(){
    int ch;
    system("cls");
    cout<<" 1-> Search your account by Username : \n";
    cout<<" 2-> Search your account by Password : \n";
    cout<<" 3-> Go to Main Menu \n";
    cout<<"\nEnter your choice : \n";
    cin>>ch;

    switch(ch){
        case 1:
             {   int ex = 0;
                string searchuser , su,sp;
                cout<<"Enter your username you remembered : \n";
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
                    cout<<"\nCongrats !! Account has been found .\n";
                    cout<<"\nYour password is --> "<<sp;
                cin.get();
                cin.get();
                main();
                }
                else{
                    cout<<"\nSorry Account not found .\n";
                    cin.get();
                cin.get();
                main();
                }
                break;
             }
        case 2:
        {
               int exi = 0;
               string searchpass , su2,sp2;
                cout<<"Enter your Password you remembered : \n";
                cin>>searchpass;

                
                ifstream searchp("Details.txt");
                while(searchp>>su2>>sp2){
                    if(sp2 == searchpass){
                            exi = 1;
                    }
                }
                searchp.close();
                if(exi==1){
                    cout<<"\nCongrats !! Account has been found .\n";
                    cout<<"\nYour Username is --> "<<su2;
                    cout<<"\nYour Password is --> "<<sp2;
                cin.get();
                cin.get();
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
         cout<<"\nSorry wrong choice enter again : \n";
         cin.get();
         cin.get();
         forgot();
    }
  }  
  }


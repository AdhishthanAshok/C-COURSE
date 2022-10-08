#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream aout;
    aout.open("sampletut44.txt");
string name;
cout<<"Enter the name: "<<endl;
  cin>>name;
    aout<<name<<endl;
  cin>>name;
    aout<<name<<endl;
  cin>>name;
    aout<<name<<endl;
    aout.close();


    ifstream ain;
    ain.open("sampletut44.txt");
    string content;
    cout<<"The elements read from the file are: "<<endl;
    while(ain.eof() == 0){
        getline(ain , content);
        cout<<content<<endl;
    }
    ain.close();
    cout<<endl;

    // cout<<"the number of lines are:"<<endl;
    // int i = 1 ;
    // while(ain.eof() == 0){
    //     getline(ain , content);
    //     i++;
    // }
    // cout<<i;
    return 0;
}
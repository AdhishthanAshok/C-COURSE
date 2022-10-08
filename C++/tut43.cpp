#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    
    // writing the name in the file .

    ofstream aout("sampletut43.txt");
    string name;
    cout<<"Enter the name: "<<endl;
    cin>>name;
    aout<<name + " is my name.";
    aout.close();
   
    // reading the content from the same file.

    ifstream ain("sampletut43.txt");
    string content;
    ain>>content;
    cout<<"The content in the file is: "<<content;
    ain.close();
    
    return 0;
}
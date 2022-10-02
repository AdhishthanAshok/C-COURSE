#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main(){
    string st;
    ifstream in("samplefortut42_input.txt");
    while(in.eof() == 0){
        getline(in , st);
    cout<<st<<endl;
    }
    in.close();

    /* To count the lines in a file..
     int i;
     while(in.eof() == 0){
        getline(in , st);
        cout<< i++<<endl;;
    }
    */

   // TO GET ONLY THE NUMBER OF LINES AS OUTPUT....
cout<<"The number of lines in the file are: "<<endl;
cout<<endl;
   int i = 0;
   while(in.eof() == 0){
        getline(in , st);
        i++;
    }
cout<<i--;
    return 0;
}
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main(){
    string st = "HELLO THIS IS WRITTEN USING OFSTREAM CLASS IN C++  .\nAnd this is also";
    ofstream out("samplefortut41_output.txt");
    out<<st;
    
    return 0;
}
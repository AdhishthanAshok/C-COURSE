#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // while printing values in inordered_map ...the elements will be printed randomly
    // while using map .. elements will be printed in a sequence manner because it uses BST

    // CREATION OF hash set
    unordered_map<string , int > m ; 
 
    // Insertion in hash map   // 1st way
    pair<string , int> p = make_pair("Hello" , 2);
    m.insert(p);

    // Insertion in hash map   // 2nd way
    pair<string ,int> pair2("World" , 5);
    m.insert(pair2);

    // Insertion in hash map   // 2nd way
    m["There"] = 4;
    m["Name"] = 4;    // here the key will be updated.. not other key is made for same 4 key
                              // key

    // search
    cout<<m.at("World")<<endl;
    cout<<m.at("Hello")<<endl;
    //  cout<<m.at("Unknown")<<endl;    // here it will give error .. it will not run
    // cout<<m["Unknown"]<<endl;  // unknown entry will  be made by this method of searching
//  cout<<m.at("Unknown")<<endl;    // here it will run because in line 27 it assign 0 value

     // size
     cout<<"The size of hash set is : "<<m.size()<< endl;
     
    // to check presence
    // count function ...if absent = 0 ,, and if present = 1.... 
    if(m.count("Hello")==1){
        cout<<"Present"<<endl;
    }
    else
    cout<<"Key is Absent"<<endl;
   
   // erase
   cout<<endl<<"The size of hash set is : "<<m.size()<< endl;
   cout<<"ELement erased is : "<< m.erase("World")<<endl;
   cout<<"The size of hash set is : "<<m.size()<< endl;
 
  // accessing elements one by one ...
  //  by using for loop

cout <<endl<<"By using for loop "<<endl;
  for (auto i:m)            // means ..auto i belongs to m
  {
    cout<< i.first << " "<< i.second <<  " "   <<endl;
  }
  
  // by using Iterators ...
cout <<endl<<"By using iterators "<<endl;
   unordered_map<string , int > :: iterator it = m.begin();

   while (it != m.end())
   { 
    cout << it->first << " " << it->second << " " << endl;
    it++;
   }
 return 0;  
}
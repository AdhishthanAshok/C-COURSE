#include<bits/stdc++.h>
using namespace std;

int main(){
    list <int> mylist (3 , 10) ;
    cout<< "Initialized List is : " ;
    for(int value : mylist){
        cout << value << "  " ;
    }
    for(int value2 : mylist){
        cin >> mylist ;
    }

    mylist.push_front(5);      // Push element in the front side of the list 
    mylist.push_back(15);      // Push element in the back side of the list 

    mylist.push_front(5);      // Push element in the front side of the list 
    mylist.push_back(15);      // Push element in the back side of the list 
    
    mylist.pop_front();      // Pop element in the front side of the list 
    mylist.pop_back();      // Pop element in the back side of the list 
    
    cout<< "\n                List should be : 5  10  10  10  15 \nList after pushing and popping : " ;
    for(int value : mylist){
        cout << value << "  " ;
    }
    
    list<int> :: iterator it ;

    list <int> mylist2 = {100 ,200 ,300 ,400};

    it = mylist2.begin();                   // initializing iterator to the desired list in which data has to be inserted
    ++it;
    ++it;                                   // increasing iterator to desired location

    mylist2.splice(it , mylist);

    cout << "\nValue after splice operator : " ;
    for(int value2 : mylist2){
        cout<< value2 << "  " ; 
    }
    
    return 0;
}
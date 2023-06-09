#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v ;
    int a ;
    int count;
    cout << "Enter the size of the vector :  ";
    cin>> count;
    for (int i = 1; i <= count; i++)
    {
        cin >> a ;
        v.push_back(a) ;            // pushback is used to insert values
    }
    
    cout << "The vector values are : " ; 
    cout<< endl;
    for(auto it = v.begin() ; it != v.end() ; ++it ){
              cout << (*it) << "  " ;  
    }
    cout << endl ;
    sort(v.begin() , v.end());
    // v.pop_back();                   // popback is used to delete values
    for(int value : v){
        cout<< value << "  ";
    }
    int element ;
    cout << endl << "Enter the location from size of " << count  << " you want to see the element : ";
    cin >>element;
    cout<< "Element at required location is : " <<  v.at(element-1);    // accesing the emlement .....
    return 0;
}
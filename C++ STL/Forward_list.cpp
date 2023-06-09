#include<bits/stdc++.h>
using namespace std;

int main(){
    forward_list <int> flist ;
    int size ;
    cout << "Enter the size of the forward list : " ;
    cin >>size;   
    cout << "Enter elements in the forward list : " ;
    int a;
    for(int i = 0 ; i<size ; i++){
        cin>> a;
        flist.push_front(a);
    }
        cout<<endl << "Forward List :  ";
                                  // Values will be printed reverse because push happens on the front side
    for(int value : flist){
        cout << value << "  ";
    }
    flist.reverse();
    cout<<endl << "Forward List after reversal :  ";
    for(int value : flist){
        cout << value << "  ";
    }

    return 0;
}
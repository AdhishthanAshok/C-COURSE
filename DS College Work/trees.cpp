#include<bits/stdc++.h>
using namespace std;

// struct tree
// {
//     int data ;
//     struct tree *left;
//     struct tree *right;
// };

// struct node {
//     struct tree *n = new struct tree

// };

int main(){
   
  
        int n;
    cout << "Enter the size : " <<endl;
    cin >> n;
    int arr[n];
    for (int k = 0; k < n; k++)
    {
        cin >> arr[k] ;
    }
     cout << "BST is : "  << endl ;
    for (int i = 0; i < n ; i++)
    { 
     cout << arr[i] << "  "  << endl ;
        for (int j = i; j < 2*j - 1;)
    {
        cout << endl;
    }
    
    }
    return 0;
}
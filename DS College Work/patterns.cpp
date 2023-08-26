#include<bits/stdc++.h>
using namespace std;

int main(){

    // To print  1 2 3 4 
             //  1 2 3 4 
             //  1 2 3 4 
             //  1 2 3 4 

// int n;
// cout<<"Enter the number: "<<endl;
// cin >> n;
//     int i= 1;
//    while(i<=n){
//     int j = 1;
//     while(j<=n){
//         cout<<n-j+1 << " " ;
//         j++;
//     }
//         cout << endl;
//         i++;
//    }

        // To print  1 2 3 4 
                 //  5 6 7 8 
                 //  9 10 11 12 
                 //  13 14 15 16    

    // int n;
    // cout<<"Enter the number: "<<endl;
    // cin >> n;   

    // int i = 1 ;
    // int count = 1 ;

    // while(i<=n){
    //     int j = 1;
    //     while (j <=n)
    //     {
    //         cout << count << " " ;
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    // To print     * * * *
                 // * * * 
                 // * * 
                 // *

    //   int n;
    // cout<<"Enter the number: "<<endl;
    // cin >> n;      
    // int i = 1 ;
    // while(i<= n){
    //         int j = i ;
    //         while (j<=n)
    //         {
    //             cout << "* " ;
    //             j++;
    //         }
    //         cout << endl;
    //         i++;
    // }   
            
    // To print     * 
                 // * * 
                 // * * * 
                 // * * * *

    //   int n;
    // cout<<"Enter the number: "<<endl;
    // cin >> n;      
    // int i = 1 ;
    // while(i<= n){
    //         int j = 1;
    //         while (j<=i)
    //         {
    //             cout << "* " ;
    //             j++;
    //         }
    //         cout << endl;
    //         i++;
    // }    


    // To print     1 
                 // 2 2  
                 // 3 3 3  
                //  4 4 4 4 

    //   int n;
    // cout<<"Enter the number: "<<endl;
    // cin >> n;      
    // int i = 1 ;
    // while(i<= n){
    //         int j = 1;
    //         while (j<=i)
    //         {
    //             cout << i  << " " ;
    //             j++;
    //         }
    //         cout << endl;
    //         i++;
    // }         

   // To print      4 4 4 4 
                 // 3 3 3  
                 // 2 2  
                 // 1 

      int n;
    cout<<"Enter the number: "<<endl;
    cin >> n;      
    for (int i = n; i >= 1; i-- )
    {
        for (int j = 1; j <= i ; j++)
        {
            cout<< i << " " ; 
        }
        cout << endl;
    }
    return 0;
}
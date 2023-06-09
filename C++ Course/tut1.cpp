// # include<iostream>
// using namespace std;

// int main(){
//     int a =45;
//     int b = 60;
//     cout<<"Value of a is: "<<a<<endl;
//     cout<<"Value of b is: "<<b;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     // int n;
//     // cout<<"Enter rows: "<<endl;
//     // cin<<n;
//    for (int i = 1; i <= 4; i++)
//    {
//       for (int space = 1; space <= 4-i  ; space++)
//       {
//         cout<<"  ";
//       }
//       for (int j = 1; j <= 2*i-1; j++)
//       {
//         cout<<"* ";
//       }
//       cout<<endl;
      
//    }

//   for (int i = 4; i >=1; i--)
//   {
//     for (int space = 1; i <=4-i; space++)
//     {
      
//         cout<<"  ";
//     }
//       for (int j = 2*i-1; j >=1; j--)
//       {
//         cout<<"* ";
//       }
    
//       cout<<endl;
//   }
  
   
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter rows: ";
    cin>>n;
    cout<<endl;
    cout<<"  Structure ::  "<<endl;
for(int i=1; i<=n;i++){
   for (int i = 1; i <= 4; i++)
   {
      for (int space = 1; space <= 4-i  ; space++)
      {
        cout<<"  ";
      }
      for (int j = 1; j <= 2*i-1; j++)
      {
        cout<<"* ";
      }
      cout<<endl;
   }

  for (int i = 4; i >=1; i--)
  {
    for (int space = 1; space <=4-i; space++)
    {
        cout<<"  ";
    }
      for (int j = 2*i-1; j >=1; j--)
      {
        cout<<"* ";
      } 
      cout<<endl;
  }
}  
    return 0;
}


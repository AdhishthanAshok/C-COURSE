#include<iostream>
using namespace std;

bool palandrome(char a[] , int size){

    int s = 0;
    int e = size -1;
    while(s<=e){
        if(a[s]!= a[e]){
            return 0;
        }
        else {
            s++;
            e--;
        }
}
        return 1;
}

void reverse(char name[] , int length ){
     int start = 0;
     int end = length - 1;
     while (start<end)
     {
        swap(name[start++] , name[end--]);
     }
}

int getlength(char name[]){
    int count  = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main(){
    char name[10];
    cout<<"Enter the name to store in array : ";
    cin>> name;
    cout<<"Your string present in the array is : ";
    cout<<name;
    int len = getlength(name);
    cout<<endl<<"Your string length is : "<<len<<endl;
    // AFTER REVERSING
    cout<<"AFTER REVERSING ";
    reverse(name , len);
    cout<<" , Your string is : ";
    cout<<name<<endl;
    
    // CHECKING PALANDROME 
    if (palandrome(name , len)== 1)
    {
        printf("Yesss!! This String you put in the array is a Palandrome");
    }
    else{
        cout<<"Not palandome"<<endl;
    }

    return 0;
    }
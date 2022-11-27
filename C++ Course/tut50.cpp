#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
       cout<<"Element is: "<<v.at(i)<<" "<<endl;
    }
}
int main(){
    
vector<float> vec1;
int size ;
float element;
cout<<"Enter the size: "<<endl;
cin>>size;
for (int i = 0; i < size; i++)
{
cout<<"Enter an element to this vector: ";
    cin>>element;
    vec1.push_back(element);
}
vector<float> :: iterator iter = vec1.begin();
// vec1.insert(iter ,45); 
// vec1.pop_back();
display(vec1);

return 0;
}
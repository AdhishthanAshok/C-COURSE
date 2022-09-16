// #include <iostream>
// #include <math.h>
// using namespace std;

// class point
// {
//     int x, y;

//     // friend int difference( int , int);

// public:
//     point(int a, int b)
//     {
//         x = a;
//         y = b;
//     }

//     int difference(point o1, point o2)
//     {
//         x = o1.x - o2.x;
//         y = o1.y - o2.y;
//         return (x * x - y * y);
//     }

//     void printnumber(void)
//     {
//         cout << "The point is: ( " << x << " , " << y << " )" << endl;
//     }
// };

// //  int distance ( int p , int q){
// //     int res = sqrt((q.x - p.x)(q.x - p.x) + (q.y - p.y) )
// //  }

// // int difference(point o1, point o2)
// // {
// //     a = o1.a - o2.a;
// //     b = o1.b - o2.b;
// // }

// int main()
// {   
//     point ::  point p, q , r ;
//     p(5 , 7);
//     p.printnumber();

//     q(8 , 7);
//     q.printnumber();

//     r.difference(p , q);
//     r.printnumber();

//     return 0;
// }




#include<iostream>
#include<math.h>

using namespace std;
class point{
    int x , y;
    public:
    friend int distance(point o1,point o2);
    point(int  , int );
    void display(){     // we can define the constructor here also
        cout<<"the point are ("<<x<<" , "<<y<<")"<<endl;
    }
};
point :: point(int a , int b){
        x=a; 
        y=b;
    }
int distance(point o1,point o2){
    float c;
    c = sqrt(pow((o2.x-o1.x),2)+pow((o2.y-o1.y),2));
    //dis = sqrt(pow((obj2.x - obj1.x), 2) + pow((obj2.y - obj1.y), 2));
    return c;

}
int main(){
  point q(4,5);
  q.display();
  point s(8,2);
  s.display();
  distance(q,s);
  cout<<"the distance between these two points are "<<distance(q,s)<<endl;
return 0;
}
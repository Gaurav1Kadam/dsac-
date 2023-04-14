#include<iostream>
using namespace std;
 
class A
{
    int x;
          public:
             
    A()
    {
        x=10;
    }
    friend class B;    //friend class
    void display(B &t)
        {
            cout<<endl<<"The value of x="<<t.y;
        }   
};
class B
{
    int y=10;
    public:
        void display(A &t)
        {
            cout<<endl<<"The value of x="<<t.x;
        }   
};
 
main()
{
    A _a;
    B _b;
    _a.display(_b);
    return 0;
}
#include<iostream>
using namespace std;
class test{
    private:
     int a;
     int *b;
    public:
    test(){
        cout<<"inside constructor";
    }
    test(int c, int d){
        this->a=c;
        this->b=d;
    }
    test(test &temp){
        this->a=temp.a;
        
    }
};
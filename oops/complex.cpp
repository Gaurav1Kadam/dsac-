#include<iostream>
using namespace std;
class complex{
    public:
        float a,b;     
        complex(){
        
        }   
        complex(float c, float d){
            this->a=c;
            this->b=d;
        }
        complex add(float i,float j){
            
            float f,g;
            f=a+i;
            g=b+j;
            complex E1(f,g);
            return E1;
        }
};
int main(){
    complex A(10,9);
    complex B(10,8);
    complex C;
    C=A.add(B.a,B.b);
    cout<<C.a<<"+"<<C.b<<"j";
    return 0;
}
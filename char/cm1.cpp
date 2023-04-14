#include<iostream>
#include<cmath>
using namespace std;
double func1(double x){
    return 31*x-sin(x)+4;
}
double func2(double x){
    return 31-cos(x);
}
double root(double x){
    return x-func1(x)/func2(x);
}
int main(){
double a=0,b=0,e,m;
cout<<"Enter initial guess:\n";
cin>>a;
cout<<"enter error window";
cin>>e;
cout<<"enter number of iteration: \n";
cin>>m;
while(m>0){
    b=root(a);
    cout<<"root calculated="<<b<<endl;
    if((fabs(a)-fabs(b)<e)){
        break;
    }
    a=b;
    m--;
}
return 0;
}
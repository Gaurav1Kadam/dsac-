#include<iostream>
using namespace std;
int b=0;
int c=1;
int sum=0;
int fibonacci(int a){
    if(a>2){
        if(sum==0){
            cout<<0<<endl;
            cout<<1<<endl;
        }
    sum=b+c;
    b=c;
    c=sum;
    cout<<sum<<endl;
    fibonacci(--a);
    }
return 0;
}
int main(){
    int n;
    cin>>n;
    fibonacci(n);
}
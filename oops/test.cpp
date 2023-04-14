#include<iostream>
using namespace std; 
int main(){
    int num=5;
    int den=10;
    int gcd=1;
    int j=min(num,den);
    for(int i=1;i<=j;i++){

        if((num%i==0) && (den%i==0)){
            gcd=i;
        }
    }
    num=num/gcd;
    den=den/gcd;
    cout<<num;
    cout<<den;
    return 0;
}
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n,k,i,count=0,oct=0,f,n2,g=0;
    cin>>n;
    n2=n;
    i=0;
    do{
        k=n%8;
        g=g/10;
        if(i==0 && k==0){
        }
        else{
            count++;
        }
        oct+=k*pow(10,count-1);
        i++;
        n=(n-k)/8;
    }while(n!=0);
    cout<<oct;
    oct=0;
    i=0;
    do{
        k=n2%8;
        if(i==0 && k==0){
        }
        else{
            while(count!=0){
                f=k*(pow(10,count-1));
                oct=oct+f;
                count--;
            }
        }
        i++;
        n2=(n2-k)/8;
    }while(n2!=0);
    return 0;
}
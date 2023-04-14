#include<iostream>
using namespace std;
bool check(int *a,int n,int b){
if(n>1){
    if(a[b-n]>a[b-n+1]){
        return false;
    }
    return check(a,--n,b);
}
return true;
}
int main(){
    int arr[4]={1,2,4,3};
    int size=sizeof(arr)/sizeof(int);
    cout<<check(arr,size,size);
    return 0;
}
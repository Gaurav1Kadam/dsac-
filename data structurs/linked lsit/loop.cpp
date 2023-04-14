#include<iostream>
using namespace std;
int main(){
    int *arr;
    for(int i=0;i<10000000000;i++){
        arr=new int[100];
        delete []arr;
        cout<<i<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    for(int n=1;n<=m;n++){
    for(int i=0;i<n;i++){
        cout<<char(65+i);
    }
    for(int i=n-1;i>=0;i--){
        cout<<char(65+i);
    }
    cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n];
    cin>>a;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        switch(a[i]){
            case 'N':
                y=y+1;
                break;
            case 'S':
                y=y-1;
                break;
            case 'E':
                x=x+1;
                break;
            case 'W':
                x=x-1;
                break;
        }
    }
    cout<<x<<endl<<y<<endl;
    if(x<0){
        for(int i=0;i>x;i--){
            cout<<'W';
        }
    }
    else if(x>0){
        for(int i=0;i<x;i++){
            cout<<'E';
        }
    }
    if(y<0){
        for(int i=0;i>y;i--){
            cout<<'S';
        }
    }
    else if(y>0){
        for(int i=0;i<y;i++){
            cout<<'N';
        }
    }
}
#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int p, int q, int r, int s){
    if(p>q){
        if(p>r){
            if(p>s){
                return p;
            }
            else{
                return s;
            }
        }
        cout<<"p>q";
    }
    else if(q>r){
        if(q>s){
            return q;
      cout<<"q>r";
        }
        else{
            return s;
        }
    cout<<2;
    }
    else if(r>s){
        return r;
        cout<<"working";
    }
    else{
        return s;
    }
    return 0;
}
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;    
    
    
    return 0;
}

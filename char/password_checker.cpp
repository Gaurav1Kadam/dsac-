#include <iostream>
using namespace std;
int main(){
    char a[100]={"abcd"};
    int i;
    while(a[i]!='\0'){
        i++;
    }
    for(int j=0;j<i;j++){
        cout<<a[j];
    }
}

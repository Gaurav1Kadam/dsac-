#include <math.h>
#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n, i, flag=0 ,j;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>j;
        arr[i]=j;
    }
    j=0,i=0;
    for(j=0;j<n;j++){
        for(i=2;i<=arr[j];i++){
            if(arr[j]%i==0){
                flag++;
            }
        }
        if(arr[j]==1){
            cout<<arr[j]<<" ";
        }
        else if(flag==1){
            cout<<arr[j]<<" ";
        }
        flag=0;
    }
    return 0;
}
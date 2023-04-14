#include<iostream>
using namespace std;
int N;
int main(){
    int c;
    cin>>N;
    int **A=new int*[N][N];
    int **B=A;
    for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
        cin>>c;
        A[i][j]=c;
        }
    }
    transpose(A,B);
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if(i==0&&i==N){
                cout<<B[i][j]<<" ";
            }
            else{
                cout<<B[i][N-j]<<" ";
            }
        }
    }
}
void transpose(int **A , int **B){
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
            B[i][j] = A[j][i];
            }
        }
}
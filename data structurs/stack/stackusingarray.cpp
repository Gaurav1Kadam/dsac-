#include<iostream>
using namespace std;
class stackusingarrays{
    int *stack;
    int capacity;
    int top=-1;
    public: 
        stackusingarrays(int size){
            stack=new int[size];
            capacity=size;
        }
        int push(int a){
            if(top==capacity-1){
                cout<<"stack is full"<<endl;
                return -1;
            }
            top++;
            stack[top]=a;
            
            return 1;
        }
        int pop(){
            if(top==-1){
                cout<<"stack is empty"<<endl;
                return -1;
            }
            cout<<"popped"<<stack[top]<<endl;
            top--;
        }
        inline bool isfull(){
            return top==capacity;
        }
        inline bool isempty(){
            return top==-1;
        }
};
int main(){
    stackusingarrays A(5);
    A.push(1);    
    A.push(2);
    A.push(3);
    A.push(4);
    A.push(5);
    A.push(6);
    A.push(7);
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    cout<<A.isempty();
    cout<<A.isfull();
}
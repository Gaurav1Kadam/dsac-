#include<iostream>
using namespace std;
template <typename T>
class stack{
    int top=-1;
    T *ptr;
    int capacity;
    public:
        stack(int size){
            ptr= new T[size];
            capacity=size;
        }
        int push(int a){
            if(top==capacity-1){
                cout<<"stack is full"<<endl;
                return -1;
            }
            top++;
            ptr[top]=a;
            
            return 1;
        }
        int pop(){
            if(top==-1){
                cout<<"stack is empty"<<endl;
                return -1;
            }
            cout<<"popped"<<ptr[top]<<endl;
            top--;
        }
        inline bool isempty(){
            return top==-1;
        }
        void display(){
            if(isempty()){
                cout<<"empty stack";
            }
            else{
            for(int i=0;i<=top;i++){
                cout<<ptr[i]<<endl;
            }
            }
        }
        ~stack(){
            delete [] ptr;
        }
};
int main(){
    stack <int>A(3);
    A.push(1);    
    A.push(2);
    A.push(3);
    A.push(4);
    A.push(5);
    A.push(6);
    A.push(7);
    A.push(1);    
    A.push(2);
    A.push(3);
    A.push(4);
    A.push(5);
    A.push(6);
    A.push(7);    
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
        A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
        A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
        A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
        A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
    A.pop();
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
}
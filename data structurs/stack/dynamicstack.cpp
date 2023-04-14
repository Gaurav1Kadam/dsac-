#include<iostream>
using namespace std;
class stack{
    int top=-1;
    int *ptr;
    int capacity;
    public:
        stack(int size){
            ptr= new int[size];
            capacity=size;
        }
        int push(int a){
            if(top==capacity-1){
                int *temp=new int[2*capacity];
                for(int i=0;i<=top;i++){
                    temp[i]=ptr[i];
                }
                delete []ptr;
                ptr=temp;
                capacity=capacity*2-1;
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
    stack A(3);
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
#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *next;
    node(int a){
        data=a;
        next=NULL;
    }
    void print(node *yo){
        node *temp=yo;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};
int main(){
    node n1(2);
    node *head= &n1;
    node n2(5);
    n1.next=&n2;
  
    node *temp=head;
    
    //dynamically
    node *n3=new node(100);
    node *n4=new node(10000);
    n3->next=n4;
    n2.next=n3; //static to dynamic
    n2.print(head);
    delete [] n3;
    delete [] n4;
}
#include<iostream>
#include "linkedlist_class.cpp"
using namespace std;
/*
class node{
    public:
       int data;
       node *next; 
    node(){
        data=0;
        next=NULL;
    }
    node(int a){
        data=a;
        next=NULL;
    }
    node* takeinput(){
        int n;
        cin>>n;
        int i=0;
        node* head=NULL;
        node* tail;
        while(n!=-1){
            node* A=new node(n);
            if(head==NULL){
                head=A;
                tail=A;
            }
            else{
                tail->next=A;
                tail=tail->next;
            }
            cin>>n;
        }
        return head;
    }
    void reverse(){
        node* temp;
        node* head=this;
        int len=length();
        int arr[len];
        int i=0;
        int temparr[len];
        while(head){
            arr[i]=head->data;
            head=head->next;
            i++;
        }
        for(int i=0;i<len;i++){
            cout<<arr[len-1-i]<<endl;
        }
        
    }
    int length(){
        node *temp=this;
        int i=0;
        while(temp!=NULL){
            temp=temp->next;
            i++;
        }
        return i;
    }
     void display(){
        node *temp=this;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
};*/
int main(){
    node *a;
    a=a->takeinput();
    cout<<a->palindrome();
}
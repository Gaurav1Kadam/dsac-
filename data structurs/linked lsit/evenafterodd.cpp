#include<iostream>
using namespace std;
class node{
    int data;
    node* next;
    public:
        node(int a){
            data=a;
            next=NULL;
        }
        node(int a[],int len){
            node* temp=this;
            for(int i=0;i<len;i++){
                temp=new node(a[i]);
               // cout<<temp->data;
                temp=temp->next;
            }
        }
        node* takeinput(int a[],int len){
            node* temp;
            node* head;
            for(int i=0;i<len;i++){
                if(i==0){
                    temp=new node(a[i]);
                    head=temp;
                }
                else{
                temp->next=new node(a[i]);
                temp=temp->next;
                }
            }
            return head;
        }
        void display(){
            node* temp=this;
            while(temp){
                cout<<temp->data;
                temp=temp->next;
            }
        }
        node* evenafterodd(){
            node *oddh;
            node *oddt;
            node *evenh;
            node *event;
            node *head=this;
            int i=0,j=0;
            while(head){
                if(head->data%2==0){  
                    
                    if(i==0){
                        i++;
                        evenh=new node(head->data);
                        event=evenh;
                        //cout<<event->data<<endl;
                    }
                    else{
                        event->next=new node(head->data);
                        event=event->next;
                    } 
                    
                }
                else{
                    cout<<"odd"<<endl;
                    cout<<head->data<<endl;
                    if(j==0){
                        j++;
                        oddh=new node(head->data);
                        oddt=oddh;
                    }
                    else{
                        oddt->next=new node(head->data);
                        oddt=oddt->next;
                    }
                }
                head=head->next;
            }
            oddt->next=evenh;
            return oddh;
        }
};
int main(){
    int arr[5]={1,2,3,5,4};
    node *A;
    A=A->takeinput(arr,5);
    node *B=A->evenafterodd();
    B->display();
}
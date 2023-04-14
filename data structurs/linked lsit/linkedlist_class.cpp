#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *next;
    node(){
       //<<endl cout<<"yo";
        next=NULL;
    }
    node(int a){
        data=a;
        next=NULL;
    }
    void display(){
        node *temp=this;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
    int* reverse(){
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
            temparr[i]=arr[len-i-1];
     //       cout<<temparr[i];
        }
       // return temparr;
    }
    node* insert(int a, int b){
        node *yo=new node(a);
        node *ptr=this;
        node *prev;
        int i=1;
        if(b==0){
            yo->next=this;
            return yo;
        }
        else{
            while(i!=(b)){
                if(ptr==NULL){
                break;
                }
                prev=ptr;
                ptr=ptr->next;
                i++;
            }
            prev->next=yo;
            yo->next=ptr;
       }
       return this;
    }
    node* takeinput(){
        int n;
        cin>>n;
        node *head=NULL; 
        while(n!=-1){
            node *A=new node(n);   //we should dynamically make a node
            node *tail;
            if(head==NULL){
                head=A;
                tail=A;
            }
            else if(1){
                tail->next=A;
                /*while(temp->next!=NULL){
              
                    temp=temp->next; complexity is n2
                }     */
                tail=tail->next;
            }
            else{
                cout<<"invalid";
                exit;
            }
            cin>>n;
        }
        return head;
    }
    node* del(int a,node *n){
        node *temp=this;
        node *prev;
        int i=0;
        if(i==a){
            prev=temp; //head
            temp=temp->next;
            prev->next=NULL;
            free(prev);
            n=temp;
        }
        else{
            while(i!=(a)){
           if(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
            i++;
                }
            }
        
            prev->next=temp->next;
            //cout<<(temp->next)->data;
            temp->next=NULL;
            free(temp);
            //cout<<(temp)->data;
        }
        return n;
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
    int find(int a){
        node *temp=this;
        int i=0;
        while(temp!=NULL){
            if(temp->data==a){
                return i;
            }
            else{
                temp=temp->next;
                i++;
            }
        }
        return -1;
    }
    int middle(){
        node *slow,*fast;
        slow=this;
        fast=this->next;
        while(fast!=NULL){
            if(fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next; 
            }
            else{
                break;
            }
        }
        cout<<fast->data;
        return slow->data;
    }
    void merge(node *x){
        node *first=this;
        node *second=x;
        node *head;
        node *tail=head;
        while(first&&second){
            if(first->data>second->data){
                tail->next=second;
                second=second->next;
            }
            else{
                tail->next=first;
                first=first->next;
            }
            tail=tail->next;
        }
        tail=tail->next;
        tail->next=NULL;
      //  return head->next;
    }
    bool palindrome(){
        node* A;
        int len=length();
        int arr[len],i=0;
        int temp[len];
        while(A){
            arr[i]=A->data;
            A=A->next;
            i++;
        }
        for(int i=0;i<len;i++){
            temp[i]=arr[len-i-1];
     //       cout<<temparr[i];``
        }
        for(i=0;i<len;i++){
            if(arr[i]==temp[i]){
            }
            else{
                return false;
            }
        }
        return true;
    }
   /* node* sort(){
        node* temp=this;
        node* tail=this;
        node* tail2;
        //sorted=&tail2;
        node *head;
        int max;
        int i=0;
        //cout<<temp->data;
        while(temp!=NULL){
            while(tail->next!=NULL){
                    if(tail->data>((tail->next)->data)){
                        max=tail->data;  
                        tail=tail->next;
                    }
                    else if(tail->data<=((tail->next)->data)){
                        max=tail->next->data;
                        tail=tail->next;
                    } 
            }
            node* sorted=new node(max);
            del(max,this);
            display();
            cout<<"after iteration"<<i<<endl;
            temp=this;
            if(i==0){
                head=sorted;
                tail2=sorted;
                i++;
            temp=temp->next;    
            tail=temp;
            continue;
            }
            if(temp->next!=NULL){
            tail2->next=sorted;
            tail2=tail2->next;
          //  temp=temp->next;
            tail=temp;
            }
            else{
                break;
            }
        }
        //cout<<;
        return head;
    }*/
};
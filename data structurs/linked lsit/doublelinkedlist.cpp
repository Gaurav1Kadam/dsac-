#include<iostream>
using namespace std;
class dnode{
    public:
    int data;
    dnode* prev;
    dnode* next;
    dnode(){
        data=0;
        prev=NULL;
        next=NULL;
    }
    dnode(int data){
        this->data=data;
        prev=NULL;
        next=NULL;
    }
    dnode* takeinput(){
        int n,j;
        cin>>n; //for size
        dnode* head=NULL;
        dnode* temp;
        dnode* tail;
        for(int i=0;i<n;i++){
            cin>>j;
            dnode* A=new dnode(j);
            if(head==NULL){
                tail=A;
                head=A;
                temp=head;
            }
            else{
                tail->next=A;
                tail=tail->next;
                tail->prev=temp;
                temp=temp->next;
            //    cout<<"is this working fine?";
            }
        }
        return head;
    }
    void display(){
        dnode *temp=this;
      //  cout<<"first";
        while(temp){ 
           cout<<temp->data;
            temp=temp->next;
            //cout<<temp->prev->data<<endl;
            //cout<<"yo";
        }
       /*/ do{
            
           // cout<<"iteration";
            cout<<temp->data<<endl;
            temp=temp->prev;
        }while(temp);*/
    }
    dnode* insert(int d,int at){
        dnode* A= new dnode(d);
        dnode* head=this;
        int len=length();
        if(at<=0){
            prev=A;
            A->next=this;
            return A;
        }
        else if(at<len){
            dnode* temp=this;
            int i;
            for( i=1;i<at;i++){
                temp=temp->next;
            }
            temp->prev->next=A;
            A->prev=temp->prev;
            A->next=temp;
            temp->prev=A;
            cout<<i;
        }
        else if(len<at){
            dnode* temp=this;
            while(temp->next){
                temp=temp->next;
            }
            temp->next=A;
            A->prev=temp;
        }
        return this;
    }
    int length(){
        dnode *temp=this;
        int i=0;
        while(temp!=NULL){
            temp=temp->next;
            i++;
        }
        return i;
    }
    void del(int at){
        dnode *temp=this;
        // for(int i=1;i<at;i++){
        //     temp=temp->next;
        // }
        while(temp){
            if(temp->data==at){
                break;
            }
            else if(temp->next=NULL){
                cout<<"not found"<<endl;
                break;
            }
            temp=temp->next;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        temp->prev=NULL;
        temp->next=NULL;
        free(temp);
     //   return this;
    }
};
int main(){
    dnode* A;
    A=A->takeinput();
   // A=A->insert(5,100);
    A->del(10);
    A->display();
}
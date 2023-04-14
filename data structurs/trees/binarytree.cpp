#include<iostream>
#include<queue>
using namespace std;
class binarytree{
    public:
        int data;
        binarytree* left;
        binarytree* right;
        binarytree(int data){
            this->data=data;
            left=NULL;
            right= NULL;
        }
        ~binarytree(){
            delete left;
            delete right;
        }
};
void print(binarytree* const &A){
    cout<<A->data<<":";
    if(A->left!=NULL){
        cout<<A->left->data<<",";
    }
    if(A->right!=NULL){
        cout<<A->right->data;
    }
    cout<<endl;
    if(A->left!=NULL){
        print(A->left);
       
    }
    if(A->right!=NULL){
        print(A->right);
    } 
}
bool check(binarytree* const &A,int B){
    if(A->data==B){
        return 1;
    }
    else{
    if(A->left!=NULL){
        check(A->left,B);
        }
    if(A->right!=NULL){
        check(A->right,B);
        } 
    }
    return 0;
}
binarytree* takeinput(){
    cout<<"enter data"<<endl;
    int data;
    cin>>data;
    binarytree* root=new binarytree(data);
    queue<binarytree*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
        binarytree* front=pendingnodes.front();
        pendingnodes.pop();
        int n;
        while(1){
        cout<<"enter number of children of"<<front->data<<endl;
        cin>>n;
        if(n>2||n<0){
            cout<<"invalid option"<<endl;
            continue;
        }      
        break;      
        }
        for(int i=0;i<n;i++){
            int childdata;
            binarytree* child;
            if(i==0){
                cout<<"enter left child of"<<front->data<<endl;
                cin>>childdata;
                child=new binarytree(childdata);
                front->left=child;
            }
            else{
                cout<<"enter right child of"<<front->data<<endl;
                cin>>childdata;
                child=new binarytree(childdata);
                front->right=child;
            }
            pendingnodes.push(child);
        }
    }
    return root;
}
int heightnode(binarytree* A, int B){
    int heightleft=1;
    int heightright=1;
    if(A==NULL){
        return 0;
    }
    else{
        if(A->left!=NULL){
            heightleft+=heightnode(A->left,B);
        }
        if(A->right!=NULL){
            heightright+=heightnode(A->right,B);
        }
        return heightleft>heightright?heightleft:heightright;
    }
}
void inorder(binarytree* A){
    if(A==NULL){
        return;
    }
    inorder(A->left);
    cout<<A->data<<" ";
    inorder(A->right);
}
void preorder(binarytree* A){
    if(A==NULL){
        return;
    }
    cout<<A->data<<" ";
    preorder(A->left);
    preorder(A->right);
}
void postorder(binarytree* A){
    if(A==NULL){
        return;
    }
    postorder(A->left);
    postorder(A->right);
    cout<<A->data<<" ";
}
bool search(int A, binarytree* B){
    if(B->data==A){
        return 1;
    }
    else{
        if(B->left!=NULL){
        return search(A,B->left);            
        }
        if(B->right!=NULL){
        return search(A,B->right);            
        }
    }
    return 0;
}
int countnode(binarytree* A){
    int count=1;
    if(A!=NULL){
        if(A->left!=NULL){
            count=count+countnode(A->left);
        }
        if(A->right!=NULL){
            count=count+countnode(A->right);
        }
    }
    else{
        return 0;
    }
    return count;
}
int main(){
    binarytree* A=takeinput();
    inorder(A);
}
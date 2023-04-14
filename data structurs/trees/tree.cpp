#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template<typename T>
class treenode{
    public:
    T data;
    vector<treenode<T>*> children;
    treenode(T data){
        this->data=data;
    }
};
treenode<int>* takinputlevelwise(){
    int rootdata;
    cout<<"enter data"<<endl;
    cin>>rootdata;
    treenode<int>* root=new treenode<int>(rootdata);
    queue<treenode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
        treenode<int>* front=pendingnodes.front();
        pendingnodes.pop();
        int n;
        cout<<"enter number of childrens of"<<front->data<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            int childdata;
            cout<<"enter"<<i<<"th children of"<<front->data<<endl;
            cin>>childdata;
            treenode<int>* child= new treenode<int>(childdata);
            front->children.push_back(child);
            pendingnodes.push(child);
        }
    }
    return root;
}
treenode<int>* takeinput(){
    int rootdata;
    cout<<"enter data";
    cin>>rootdata;
    treenode<int>* A=new treenode<int>(rootdata);
    A->data=rootdata;
    int n; 
    cout<<"enter no of children"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        treenode<int>* child=takeinput();
        A->children.push_back(child);
    }
    return A;
}
void print(treenode<int>* A){
    if(A==NULL){
        cout<<"empty tree";
    }
    else{
    cout<<A->data<<":";
    for(int i=0;i<A->children.size();i++){
        cout<<A->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<A->children.size();i++){
        print(A->children[i]);
    }
    }
}
int numnodes(treenode<int>* const A){
    int ans=1;
    for(int i=0;i<A->children.size();i++){
        ans+=numnodes(A->children[i]);
    }
    return ans;
}
int sumnodes(treenode<int>* const A){
    int ans=A->data;
    for(int i=0;i<A->children.size();i++){
        ans+=sumnodes(A->children[i]);
    }
    return ans;
}
// int height(treenode<int>* const A,int b){
//     if(A==NULL){
//         return 0;
//     }
//     else{
//         for(int i=0;i<A->children.size();i++){
            
//         }
//     }
// }
int countleafnodes(treenode<int>* const A){
    int count=1;
    if(A==NULL){
        return 0;
    }
    if(&A->children==NULL){
        return 1;
    }
    else{
        for(int i=0;i<A->children.size();i++){
            count+=countleafnodes(A->children[i]);
        }
        return count;
    }
}
int main(){
    treenode<int>* root=takinputlevelwise();
   // cout<<height(root,1)<<endl;
    cout<<countleafnodes(root);
}
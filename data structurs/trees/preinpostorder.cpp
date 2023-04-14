#include<iostream>
using namespace std;
class tree{
    public:
    char data;
    tree* left;
    tree* right;
    tree(char data){
        this->data=data;
    }
};
tree* transform(char *in,char *pre){\
    tree* root;
    root=new tree(pre[0]);
    if(root==NULL){}
    return NULL;
}
int main(){
    char in[6]={'d','b','e','a','f','c'};
    char pre[6]={'a','b','d','e','c','f'};
}
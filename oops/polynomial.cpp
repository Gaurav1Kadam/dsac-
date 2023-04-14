#include<iostream>
using namespace std;
class polynomial{
    private:
        int *arr;
        int size;
    public:
    polynomial(int *arr,int size){ //parameterised constructor
        this->arr=new int[size];
        for(int i=0;i<size;i++){
            this->arr[i]=arr[i];
        }
        this->size=size;
    }
    polynomial(){   //constructor
        int n;
        cin>>n;
        int *deg=new int[n];
        int max;
        for(int i=0;i<n;i++){
            if(i==0){
                cin>>deg[i];
                max=deg[i];           
            }
            else{
                int j;
                cin>>j;
                deg[i]=j;
                if(deg[i]>=max){
                    max=deg[i];
                }
            }
        }
        int *coef=new int[n];
        for(int i=0;i<n;i++){
            cin>>coef[i];
        }
        arr=new int[max+1];
        for(int i=0;i<n;i++){
            arr[deg[i]]=coef[i];
        }
        size=max+1;
        delete [] deg;
        delete [] coef;
        cout<<endl;
    }
    polynomial operator+(polynomial &x){ //addition;
        int *temp=new int[max(size,x.size)];
        for(int i=0;i<max(size,x.size);i++){
            temp[i]=0;
        }
        for(int i=0;i<size;i++){
            if(arr[i]==0){     
                continue;
            }
            else{
                temp[i]=arr[i];
                
                for(int j=0;j<x.size;j++){
                    if((i==j && x.arr[j]!=0)){
                        temp[j]=arr[j]+x.arr[j];
                    }
                    else if(x.arr[j]!=0&&temp[j]==0){
                        temp[j]=x.arr[j];
                    }
                }
            }
        }

        polynomial C(temp,max(size,x.size));
        delete [] temp;
        return C;
    }
    polynomial(const polynomial &x){ //copyconstructor;
            this->arr=new int[x.size];
            for(int i=0;i<size;i++){
                this->arr[i]=x.arr[i];
            }
            this->size=x.size;
        }
    polynomial operator-(polynomial &x){
        int *temp=new int[max(size,x.size)];
        for(int i=0;i<max(size,x.size);i++){
            temp[i]=0;
        }
        for(int i=0;i<size;i++){
            if(arr[i]==0){     
                continue;
            }
            else{
                temp[i]=arr[i];
                
                for(int j=0;j<x.size;j++){
                    if((i==j && x.arr[j]!=0)){
                        temp[j]=arr[j]-x.arr[j];
                    }
                    else if(x.arr[j]!=0&&temp[j]==0){
                        temp[j]=-x.arr[j];
                    }
                }
            }
        }

        polynomial C(temp,max(size,x.size));
        delete [] temp;
        return C;
    }
    void display(){
        for(int i=0;i<size;i++){
            if(arr[i]!=0){
                    cout<<arr[i]<<'*'<<'x'<<'*'<<i;
                if(i!=(size-1)){
                    if(arr[i+1]>=0){
                        cout<<'+';
                    }
                }
            }
        }
    }
    ~polynomial(){    //destructor
        delete [] arr;
    }
    void menu(){
        cout<<"enter a number";
        int n;
        cin>>n;
    }
    polynomial operator*(polynomial &x){
        int *temp=new int[size*x.size];
        for(int i=0;i<size*x.size;i++){
            temp[i]=0;
        }
        for(int i=0;i<size;i++){
            for(int j=0;j<x.size;j++){
                temp[i+j]=temp[i+j]+arr[i]*x.arr[j];  
            }
        }
        polynomial p3(temp,size*x.size);
        
        delete [] temp;
        return p3;
    }
    void setcoefficient(int deg, int coef){
        if(deg>size){
            int *newdata=new int[deg*2];
            for(int i=0;i<deg*2;i++){
                newdata[i]=0;
            }
            for(int i=0;i<deg*2;i++){
                if(size>i){
                    newdata[i]=arr[i];
                } 
                else{
                    break;
                }        
            }
            delete [] arr;
            arr=newdata;
            size=deg*2;
            cout<<size<<endl;
            arr[deg]=coef;
        }
        else{
            arr[deg]=arr[deg]+coef;
        }
    }
};
int main(){
    int arr[3]={0,1,0};
    int arr2[4]={0,4,-3,1};
    polynomial p1(arr,3);
    polynomial p2(arr2,4);
    p2.setcoefficient(8,100);
    p2.display();
    return 0;
}
#include<iostream>
using namespace std;
class Dynamicarray{
    private:
        int *arr;
        int size;
        int index;
    public:
        Dynamicarray(){
            arr=new int[2];
            index=0;
            size=2;
        }
        Dynamicarray(Dynamicarray &X){
            this->arr=new int[X.size];
            for(int i=0;i<X.size;i++){
                this->arr[i]=X.arr[i];
            }
            this->index=X.index;
            this->size=X.size;
        }
        void add(int a){
            if(index==size){
                int *newdata=new int[2*size];
                for(int i=0;i<size;i++){
                    newdata[i]=arr[i];
                }
                delete [] arr;
                arr=newdata;
                size*=2;
            }    
            arr[index]=a;
            index++;
        }
        void print(){
            for(int i=0; i<index; i++){
                cout<<arr[i]<<endl;
            }
        }
        int insert(int a, int b){
            if(a<size){
                arr[a]=b;
            }
            else if(a==size){
                add(b);
            }
            else{
                return 0;
            }
        }
        int indexing(int a){
            if(a<size){
                return arr[a];
            }
            else{
                return -1;
            }
        }
};
int main(){
    Dynamicarray A;
    A.add(1);
    A.add(2);
    A.add(3);
    A.add(4);
    A.add(5);
    Dynamicarray B=A;
    A.insert(5,100);
    cout<<"A"<<endl;
    A.print();
    cout<<"b"<<endl;
    B.print();
    return 0;
}
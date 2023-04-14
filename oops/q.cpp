#include<iostream>
using namespace std;
class Myarray{
    private:
        int *i;
    public:
        Myarray(int a){
            int n;
            cin>>n;
            i=new int[n];
            i[0]=a;
            cout<<*i<<endl; 
        }
        ~Myarray(){
            delete [] i;
            cout<<"inside destructor"<<endl;
        }
};
int main(){
    int c;
    cin>>c;
    Myarray b(c);
    return 0;
}
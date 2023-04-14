#include<iostream>
#include<algorithm>
using namespace std;
class fraction{
    private :
    int num, den;
    public :
    fraction(){

    }
    fraction(int num,int den){
        this->num=num;
        this->den=den;
    }
    void setnum(int a){
        num=a;
    }
    void setden(int a){
        den=a;
    }
    int getnum(){
        return num;
    }
    int getden(){
        return den;
    }
    void display(){
        cout<<num<<'/'<<den<<endl;
    }
    void simplify(){
        cout<<"jellp";
        int gcd=1;
        int j=min(num,den);
        cout<<j;
        for(int i=1;i<=j;i++){
            if((num%i==0) && (den%i==0)){
                gcd=i;
            }
        }
        num=num/gcd;
        den=den/gcd;
    }
    void addition(fraction x){
        fraction C;
        C.setden(den*x.getden());
        C.setnum(num*x.getden()+x.getnum()*den);
        C.simplify();
        C.display();
    }
    
};
int main(){
    int a,b;
    cin>>a>>b;
    fraction A(a,b);
    cin>>a>>b;
    fraction B(a,b);
    A.addition(B);
    return 0;
}
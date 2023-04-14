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
        int gcd=1;
        int j=min(num,den);
        for(int i=1;i<=j;i++){
            if((num%i==0) && (den%i==0)){
                gcd=i;
            }
        }
        num=num/gcd;
        den=den/gcd;
    }
    fraction operator +(fraction &x){//we could also just use &x to prevent making a new copy and add const so that the value of this class cant change
        fraction C;
        C.setden(den*x.getden());
        C.setnum(num*x.getden()+x.getnum()*den);
        C.simplify();
        return C;
    }
    fraction operator *(fraction &x){
        fraction D;
        D.setden(den*x.getden());
        D.setnum(num*x.getnum());
        D.simplify();
        return D;
    }
    fraction operator++(){
        num=num+den;
        return *this; //returning the object rather than its address.. thats why used *
    }
    
};
int main(){
    int a,b;
    cin>>a>>b;
    fraction A(a,b);
    cin>>a>>b;
    fraction B(a,b);
    fraction C=A+B;
    fraction D=A*B;
    ++A;
    A.display();
    /*C.display();
    D.display();*/
    return 0;
}
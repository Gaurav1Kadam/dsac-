#include<iostream>
using namespace std;
class product{
    private:
        int mrp;
        int srp;
    public:
        product(int a, int b){
           this->mrp=a;
        if(mrp>b){
                this->srp=b;
            }
            else{
                this->srp=mrp;
            } 
        }
        void Mrp(int price){
            mrp=price;
        }
        void Srp(int price){
            if(mrp>price){
                srp=price;
            }
            else{
                srp=mrp;
            }
        }
        int a(){
            return mrp;
        }
        int b(){
            return srp;
        }
};
int main(){
    product camera(100,200);
    cout<<camera.a();
    cout<<camera.b();
    return 0;
}
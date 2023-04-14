#include <iostream>
using namespace std;
class test {
    private:
    int a=0; //objno
    static int b; //objcount
    public:
    test(){
        a=++b;
    }
    ~test(){
        --b;
    }
    void printobjno(){
        cout<<"objno"<<a;
    }
    static void printobjcnt(){
        cout<<"objcount"<<b;
    }
};
int test::b;
int main(){
    test A;
    test B;
    cout<<printobjno()<<endl;
    test C;
    cout<printobjcount()<<endl;

}
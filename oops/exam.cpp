#include<iostream>
using namespace std; 
class student{
    public: 
        int rno;
        string name;
        student(){
            cout<<"enter rno"<<endl;
            cin>>rno;
            cout<<"enter name"<<endl;
            cin>>name;
        }
};
class exam:public  student{
    public:
        int arr[6];
        int total=0;
        exam(){
            cout<<"inside";

            for(int i=0;i<6;i++){
                int temp;
                cin>>temp;
                if(temp>100){
                    cout<<"invalid"<<endl;
                    cin>>temp;
                    arr[i]=temp;
                }
                else{
                    arr[i]=temp;
                }
            }
        }
        
            for(int i=0;i<6;i++){
                total+=arr[i];
            }
      
};
class result:public exam{
    public:
        int total_marks=600;
        void display(){
            cout<<rno<<endl;
            cout<<name<<endl;
            cout<<total<<endl;
            cout<<"passed";    
        }
};
int main(){
    result aman;
    aman.display();
}
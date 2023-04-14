#include<iostream>
#include<sstream>
using namespace std;
class Student{
    private: 
        string first; 
        string last;
        int age;
        int standard;
    public:
        int set_age(int a){
            age=a;
            return age;
        }
        int set_standard(int b){
            standard=b;
            return standard;
        }
        string set_first_name(string c){
            first=c;
            return first;
        }
        string set_last_name(string d){
            last=d;
            return last;
        }
        int get_age(){
            return age;
        }
        int get_standard(){
            return standard;
        }
        string get_first_name(){
            return first;
        }
        string get_last_name(){
            return last;
        }
        string tostring(){
            string a=to_string(age)+","+first+","+last+","+to_string(standard);
            return a;
        }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    cout<<endl;
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.tostring();
    
    return 0;
}
void operator++(){
    cout<<"adi";
}
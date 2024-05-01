#include <iostream>
#include <sstream>
#include<string.h>
#include<cstring>
using namespace std;
class Student{
    public:
    int age, standard;
    string first_name, last_name;
    void set_age(int age1){
     age=age1;
    }
    void set_standard(int stan){
        standard=stan;
    }
    void set_first_name(string fi){
        first_name=fi;
    }
    void set_last_name(string las){
        last_name=las;
    }
    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_last_name(){
    return last_name;
    }
    string get_first_name(){
    return first_name;
    }
    string to_string(){
       stringstream ss;
       ss<<age<<","<<first_name<<","<<last_name<<","<<standard;
       return ss.str();
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
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

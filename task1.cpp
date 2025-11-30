#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
    
    void display(){
        cout<<name<<" "<<age<<" "<<endl;
    };
};
class student:public person{
    public:
    int rollno;
    void showroll(){
        cout<<rollno<<" "<<endl;
    };
};
int main(){
    student s;
    s.name="rabia";
    s.age=19;
    s.rollno=27;
    
    s.display();
    s.showroll();
    return 0;
}

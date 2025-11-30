#include <iostream>
using namespace std;
class employee{
    public:
     virtual void work(){
        cout<<"Employee is working!"<<endl;
    }
};
class manager: public employee{
    public:
    void work(){
        cout<<"Manager is working!"<<endl;
    }
};
int main() {
    employee* empptr;
    manager m;
    empptr= &m;
    empptr->work();
    

    return 0;
}

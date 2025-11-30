#include <iostream>
using namespace std;
class printer{
   public:
   void print(int x){
       cout<<"integer: "<<x<<endl;
   }
   void print(double y){
        cout<<"double: "<<y<<endl;
   }
};
int main(){
    printer p1;
    p1.print(7);
    p1.print(7.85);
    return 0;
}

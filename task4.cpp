#include <iostream>
using namespace std;

class BankAccount {
public:
    double balance = 0;   

    void deposit(double x) {
        balance += x;    
    }
};
class SavingsAccount : public BankAccount {
public:
    void display() {
        cout << "Balance: " << balance << endl;
    }
    double interest() {
        return balance * 0.05;   
    }
};
int main() {
    double amount;
    cout << "Enter money to be deposited: ";
    cin >> amount;
    SavingsAccount s1;
    s1.deposit(amount);
    s1.display();
    cout << "Interest (5%): " << s1.interest() << endl;
    return 0;
}

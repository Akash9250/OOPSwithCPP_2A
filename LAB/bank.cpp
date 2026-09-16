#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    string customerName;
    float balance;

public:
    BankAccount(int acc, string name, float bal) {
        accountNumber = acc;
        customerName = name;
        balance = bal;
    }

    friend void compareBalance(const BankAccount &a1, const BankAccount &a2);
};

void compareBalance(const BankAccount &a1, const BankAccount &a2) {
    if (a1.balance > a2.balance)
        cout << "Higher Balance: " << a1.customerName << endl;
    else if (a2.balance > a1.balance)
        cout << "Higher Balance: " << a2.customerName << endl;
    else
        cout << "Both have equal balance." << endl;
}

int main() {
    BankAccount a1(101, "Aditya", 50000);
    BankAccount a2(102, "Rahul", 70000);

    compareBalance(a1, a2);

    return 0;
}
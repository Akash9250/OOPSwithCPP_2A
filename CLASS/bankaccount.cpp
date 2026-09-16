#include<iostream>
using namespace std;
class bankaccount{
private:
    double balance;
public:
    bankaccount(double initialBalance){
    balance=initialBalance;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << amount << " deposited successfully." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << amount << " withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};
int main() {
    bankaccount a(10000);

    a.displayBalance();

    a.deposit(5000);
    a.displayBalance();

    a.withdraw(3000);
    a.displayBalance();

    return 0;
}
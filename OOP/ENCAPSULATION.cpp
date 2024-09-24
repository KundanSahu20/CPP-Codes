#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    void setBalance(double amount) {
        if (amount >= 0)
            balance = amount;
        else
            cout << "Invalid amount." << endl;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.setBalance(1000);
    cout << "Current balance: $" << account.getBalance() << endl;

    return 0;
}
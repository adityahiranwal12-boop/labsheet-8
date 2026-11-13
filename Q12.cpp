// Program 12: Bank Account encapsulation
#include <iostream>
#include <iomanip>
using namespace std;

class BankAccount {
    double balance;
public:
    explicit BankAccount(double openingBalance = 0) : balance(openingBalance >= 0 ? openingBalance : 0) {}
    void deposit(double amount) {
        if (amount > 0) balance += amount;
        else cout << "Deposit must be positive.\n";
    }
    bool withdraw(double amount) {
        if (amount <= 0 || amount > balance) return false;
        balance -= amount;
        return true;
    }
    double getBalance() const { return balance; }
};

int main() {
    double opening; cout << "Opening balance: "; cin >> opening;
    BankAccount account(opening);
    int choice;
    do {
        cout << "1 Deposit  2 Withdraw  3 Show balance  0 Exit\nChoice: "; cin >> choice;
        if (choice == 1) { double amount; cout << "Amount: "; cin >> amount; account.deposit(amount); }
        else if (choice == 2) { double amount; cout << "Amount: "; cin >> amount; if (!account.withdraw(amount)) cout << "Withdrawal rejected.\n"; }
        else if (choice == 3) cout << fixed << setprecision(2) << "Balance: " << account.getBalance() << '\n';
    } while (choice != 0);
}

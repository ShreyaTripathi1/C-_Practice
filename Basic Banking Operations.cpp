#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize values
    BankAccount(string name, int accNumber, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Method to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Method to withdraw an amount
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance: " << balance << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    // Method to display the name and balance
    void display() const {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    string name;
    int accNumber;
    string accType;
    double initialBalance;

    // Getting initial values from the user
    cout << "Enter depositor's name: ";
    cin>> name;
    // cin.ignore();
    // getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNumber;
    cin.ignore(); // Clear the newline character left in the buffer
    cout << "Enter account type: ";
    getline(cin, accType);
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    // Creating a BankAccount object with initial values provided by the user
    BankAccount account(name, accNumber, accType, initialBalance);

    int choice;
    do {
        cout << "\nBank Account Menu\n";
        cout << "1. Display Account Details\n";
        cout << "2. Deposit Amount\n";
        cout << "3. Withdraw Amount\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.display();
                break;
            case 2: {
                double depositAmount;
                cout << "Enter amount to deposit: ";
                cin >> depositAmount;
                account.deposit(depositAmount);
                break;
            }
            case 3: {
                double withdrawAmount;
                cout << "Enter amount to withdraw: ";
                cin >> withdrawAmount;
                account.withdraw(withdrawAmount);
                break;
            }
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

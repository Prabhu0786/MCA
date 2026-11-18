
#include <iostream>
using namespace std;

class BankAccount
{
    string name;
    int accountNumber;
    string accountType;
    float balance;

public:

    void assign()
    {
        cout << "Enter depositor name: ";
        cin >> name;

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter account type: ";
        cin >> accountType;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;

        cout << "Enter deposit amount: ";
        cin >> amount;

        if(amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully.";
        }
        else
            cout << "Invalid amount.";
    }

    void withdraw()
    {
        float amount;

        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully.";
        }
        else
            cout << "Insufficient balance or invalid amount.";
    }

    void display()
    {
        cout << "\nAccount Holder: " << name;
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Type: " << accountType;
        cout << "\nBalance: " << balance;
    }
};

int main()
{
    BankAccount b;
    int choice;

    b.assign();

    do
    {
        cout << "\n\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Display Account";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                b.deposit();
                break;

            case 2:
                b.withdraw();
                break;

            case 3:
                b.display();
                break;

            case 4:
                cout << "Thank you!";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 4);

    return 0;
}


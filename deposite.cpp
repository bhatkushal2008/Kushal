#include <iostream>
#include <string>
using namespace std;

class savingaccount
{
private:

    string accountholdername;
    int accountnumber;
    double balance;
    double intrestrate;

public:

    savingaccount(string name, int accnumber, double initialbalance, double rate)
    {
        accountholdername = name;
        accountnumber = accnumber;
        balance = initialbalance;
        intrestrate = rate;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: Rs " << amount << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdraw: Rs " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display()
    {
        cout << "\n[Saving Account]" << endl;
        cout << "Account Holder: " << accountholdername << endl;
        cout << "Account Number: " << accountnumber << endl;
        cout << "Balance: Rs " << balance << endl;
        cout << "Interest Rate: " << intrestrate << "%" << endl;
    }
};

int main()
{
    savingaccount savings("Alice", 1001, 5000, 3.0);

    savings.display();

    savings.deposit(1000);

    savings.withdraw(2000);

    savings.display();

    return 0;
}
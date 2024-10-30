#include <iostream>
#include <string>
using namespace std;
int depositMoney(int amount, int balance);
int withdrawMoney(int amount, int balance);
void checkBalance(int balance);
int main()
{
    int balance = 1000;
start:
    string input = "";
    cout << "Enter 1 to deposit\nEnter 2 to withdraw\nEnter 3 to check balance\nEnter 4 to exit\n";
    cout << "\n------------------------------------------\n";
    cin >> input;
    cout << "------------------------------------------\n";
    if (input == "1")
    {
        int amount = 0;
        cout << "Enter amount to deposit\n";
        cin >> amount;
        balance = depositMoney(amount, balance);
    }
    else if (input == "2")
    {
        int amount = 0;
        cout << "Enter amount to withdraw\n";
        cin >> amount;
        balance = withdrawMoney(amount, balance);
    }
    else if (input == "3")
    {
        checkBalance(balance);
    }
    else if (input == "4")
    {
        cout << "Thank You For using Raffey's ATM" << endl;
        exit(0);
    }
    else
    {
        cout << "Invalid input\n";
    }
    goto start;
    return 0;
}

int depositMoney(int amount, int balance)
{
    cout << "You Deposited: " << amount << "$" << endl;
    balance += amount;
    cout << "Your New Balance is: " << balance << "$ " << endl;
    cout << "\n------------------------------------------\n";
    return balance;
}
int withdrawMoney(int amount, int balance)
{

    if (amount > balance)
    {
        cout << "Insufficient balance " << balance << "$" << endl;
        cout << "\n------------------------------------------\n";
        return balance;
    }
    else
    {
        cout << "You Withdrew: " << amount << "$" << endl;
        balance -= amount;
        cout << "Your New Balance is: " << balance << "$ " << endl;
        cout << "\n------------------------------------------\n";
        return balance;
    }
}
void checkBalance(int balance)
{
    cout << "Your Current Balance is: " << balance << "$ " << endl;
    cout << "\n------------------------------------------\n";
}
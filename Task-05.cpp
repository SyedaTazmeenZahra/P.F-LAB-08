// Using switch statement, make a simple bank transaction system.
#include <iostream>
using namespace std;
int main() {
    int menu;
    cout << "Enter a number from 1 to 4: ";
    cin >> menu;

    int deposit;
    cout << "Enter a deposit value: ";
    cin >> deposit;

    int Withdraw;
    cout << "Enter a withdrawal value: ";
    cin >> Withdraw;

    int CheckBalance;
    cout << "Check Balance amount: ";
    cin >> CheckBalance;

    int balance_a_deposit;
    balance_a_deposit = CheckBalance + deposit;
    switch (menu) 
    {
        case 1:
        cout << "The deposit value is: " << deposit;
        break;

        case 2:
        cout << "The Withdrawal value is: " << Withdraw;
        break;

        case 3:
        cout << "Check balance before deposit: " << CheckBalance << endl;
        cout << "Check balance after deposit: " << balance_a_deposit << endl;
        cout << "Check balance after deposit after cutting withdrawal: " << balance_a_deposit - Withdraw;
        break;

        case 4:
        cout << "Exit";
        break;

        default:
        cout << "Invalid Input";
        break;
    }
    return 0;
}
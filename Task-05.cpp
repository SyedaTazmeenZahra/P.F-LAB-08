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
    switch (menu) 
    {
        case 1:
        balance_a_deposit = CheckBalance + deposit;
        cout << "The deposit value is: " << balance_a_deposit;
        break;

        case 2:
        cout << "The Withdrawal value is: " << balance_a_deposit - Withdraw;
        break;

        case 3:
        cout << "Check original balance: " << CheckBalance;
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
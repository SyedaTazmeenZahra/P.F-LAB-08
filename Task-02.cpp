//Using switch statement, make a simle calculator of +, -, *, /.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    char opr;
    cout << "Enter +, -, *, / : ";
    cin >> opr;

    switch (opr)
    {
        case '+':
        cout << num1 + num2;
        break;

        case '-':
        cout << num1 - num2;
        break;

        case '*':
        cout << num1 * num2;
        break;

        case '/':
        cout << num1 / num2;
        break;

        default:
        cout << "Invalid Input";
        break;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int month;
    cout << "Enter a month number (1 for January), (2 for February), (3 for March), (4 for April), (5 for May), (6 for June), (7 for July), (8 for August), (9 for September), (10 for October), (11 for November), (12 for December): ";
    cin >> month;

    switch (month)
    {
        case 1:
        cout << "Winter";
        break;

        case 2:
        cout << "Winter";
        break;

        case 3:
        cout << "Spring";
        break;

        case 4:
        cout << "Spring";
        break;

        case 5:
        cout << "Summer";
        break;

        case 6:
        cout << "Summer";
        break;

        case 7:
        cout << "Summer";
        break;

        case 8:
        cout << "Summer";
        break;

        case 9:
        cout << "Autumn";
        break;

        case 10:
        cout << "Autumn";
        break;

        case 11:
        cout << "Winter";
        break;

        case 12:
        cout << "Winter";
        break;

        default:
        cout << "Invalid Input";
        break;
    }
    return 0;
}
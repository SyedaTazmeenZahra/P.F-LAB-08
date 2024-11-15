// Using switch statement, make simple traffic light simulation program that prints actions upon calling a color.
#include <iostream>
using namespace std;
int main() {
    char light;
    cout << "Enter a character (R for Red), (G for Green), (Y for Yellow): ";
    cin >> light;
    
    switch (light) 
    {
        case 'R':
        cout << "Stop";
        break;

        case 'G':
        cout << "Go";
        break;

        case 'Y':
        cout << "Slow Down";
        break;
        
        default:
        cout << "Invalid Input";
        break;
    }
    return 0;
}
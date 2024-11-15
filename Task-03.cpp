//Using switch statement, write single alphabet character (lower or uppercase) to tell vowel or consonant.
#include <iostream>
using namespace std;
int main() {
    char text;
    cout << "Enter a character: ";
    cin >> text;

    switch (text)
    {
        case 'a':
        cout << "a is a vowel";
        break;

        case 'A':
        cout << "A is a vowel";
        break;

        case 'e':
        cout << "e is a vowel";
        break;

        case 'E':
        cout << "E is a vowel";
        break;

        case 'i':
        cout << "i is a vowel";
        break;

        case 'I':
        cout << "I is a vowel";
        break;

        case 'o':
        cout << "o is a vowel";
        break;

        case 'O':
        cout << "O is a vowel";
        break;

        case 'u':
        cout << "u is a vowel";
        break;

        case 'U':
        cout << "U is a vowel";
        break;

        default:
        cout << "Consonant";
        break;
    }
    return 0;
}
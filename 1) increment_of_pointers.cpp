// Aakash Choudhari
// 24070123031
// E&TC-A2

#include <iostream>
using namespace std;

int main() {
    int a;
    float b;
    char c;

    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter a float: ";
    cin >> b;
    cout << "Enter a character: ";
    cin >> c;

    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    cout << "\nInitial addresses:";
    cout << "\nInteger pointer: " << pInt;
    cout << "\nFloat pointer: " << pFloat;
    cout << "\nChar pointer: " << (void*)pChar;

    pInt++;
    pFloat++;
    pChar++;

    cout << "\n\nAfter incrementing:";
    cout << "\nInteger pointer: " << pInt;
    cout << "\nFloat pointer: " << pFloat;
    cout << "\nChar pointer: " << (void*)pChar;

    return 0;
}

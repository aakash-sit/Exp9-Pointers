// Aakash Choudhari
// 24070123031
// E&TC-A2

#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    char *p = str;
    cout << "Characters in string: ";
    while (*p != '\0') {
        cout << *p << " ";
        p++;
    }

    return 0;
}

// Aakash Choudhari
// 24070123031
// E&TC-A2

#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    int *p = arr; 

    cout << "\nPointer initially points to value: " << *p;
    p += 2; 
    cout << "\nAfter moving forward by 2: " << *p;

    p -= 1; 
    cout << "\nAfter moving back by 1: " << *p;

    return 0;
}

// Store and Display 5 Integers
#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "The numbers you entered are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

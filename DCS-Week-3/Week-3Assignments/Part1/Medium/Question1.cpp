//  Input a number and reverse its digits.
#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "Enter number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    cout << "Reversed number: " << reversed << endl;
    return 0;
}

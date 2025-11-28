// Write a recursive function that calculates the sum of digits of a given number.
#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0)
        return 0;

    int last = n % 10;          
    int remaining = n / 10;     

    return last + sumOfDigits(remaining);
}

int main() {
    int n;
    cin >> n;

    cout << sumOfDigits(n);
    return 0;
}

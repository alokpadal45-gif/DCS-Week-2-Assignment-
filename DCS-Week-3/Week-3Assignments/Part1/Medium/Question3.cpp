// Input an integer and calculate its factorial.
#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;
    cout << "Enter number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << num << " is: " << factorial << endl;
    return 0;
}

// Print multiplication tables for numbers 1 through 10.
#include <iostream>
using namespace std;

int main() {
    for (int num = 1; num <= 10; num++) {
        cout << "Multiplication Table of " << num << ":\n";
        for (int i = 1; i <= 10; i++) {
            cout << num << " x " << i << " = " << num * i << endl;
        }
        cout << endl;
    }
    return 0;
}

// Identify how many times each loop runs. 
#include <iostream>
using namespace std;

void someAlgorithm(int n)
{
    int x = 0;

    for (int i = n - 2; i >= 1; i--) {
        x = x + i;
    }
    cout << "Output after first loop: " << x << endl;

    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << "Comparison reached last value i = " << i << endl;
        }
    }

    for (int i = 0; i < 6; i++) {
        x = i;
    }

    cout << "Final value after third loop: " << x << endl;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    someAlgorithm(n);

    return 0;
}

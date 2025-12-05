// Determine how many steps until it reaches 1.
#include <iostream>
using namespace std;

void someAlgorithm(int n)
{
    cout << "Starting value n = " << n << endl;

    int x = 0;

    for (int i = n; i >= 1; i = i - 4) {
        x = x + i;
    }

    cout << "Final result after loop: " << x << endl;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    someAlgorithm(n);

    return 0;
}



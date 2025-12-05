// Starting at 1 and doubling each iteration results in how many steps?
#include <iostream>
using namespace std;

void someAlgorithm(int n)
{
    int x = 0;

    for (int i = 1; i <= n; i *= 2) {
        x = x + i;
        cout << "i = " << i << ", x = " << x << endl;
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

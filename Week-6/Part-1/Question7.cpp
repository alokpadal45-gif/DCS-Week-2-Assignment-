#include <iostream>
using namespace std;

void someAlgorithm(int n)
{
    int x;
    cin >> x;
    cout << "Input value: " << x << endl;
    for (int i = 0; i < n; i++)
    {
        for (int k = n; k >= 1; k /= 2)
        {
            x = x + k;
            cout << "Inner log loop: k = " << k << ", x = " << x << endl;
        }

        for (int j = 0; j < n; j++)
        {
            if (j == i)
                cout << "Comparison: j = " << j << ", i = " << i << endl;
        }
    }
    x = x + 1;

    cout << "Final result after all operations: " << x << endl;
}

int main()
{
    int n;
    cout << "Enter n (size of loops): ";
    cin >> n;

    someAlgorithm(n);

    return 0;
}

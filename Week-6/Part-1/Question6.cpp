// nested loop
#include <iostream>
using namespace std;

void someAlgorithm(int n)
{
    int x;
    cin >> x;
    cout << "Input value: " << x << endl;

    for (int i = 0; i < n; i++) {

        int y = i;


        for (int j = 0; j < n; j++) {

            if (j == y) {
                cout << "Comparison: j = " << j << ", y = " << y << endl;
            }
        }
    }

    x = x + n;

    cout << "Final result after arithmetic operation: " << x << endl;
}

int main()
{
    int n;
    cout << "Enter n (size of loops): ";
    cin >> n;

    someAlgorithm(n);

    return 0;
}

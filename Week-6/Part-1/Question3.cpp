// How many increments of 5 are needed to reach n?
#include <iostream>
using namespace std;

void someAlgorithm(int n)
{
    cout << "Starting value n = " << n << endl;

    int count = 0;
    for (int i = 1; i <= n; i = i + 5) {
        cout << "Comparing i = " << i << " with n = " << n << endl;
        count++;
    }

    cout << "Total number of comparisons: " << count << endl;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    someAlgorithm(n);

    return 0;
}

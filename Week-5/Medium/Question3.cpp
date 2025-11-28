// Use tail recursion to compute a^b.
#include <iostream>
using namespace std;

long long power(int a, int b, long long result = 1) {
    if (b == 0)
        return result;
    return power(a, b - 1, result * a);
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << power(a, b);
    return 0;
}

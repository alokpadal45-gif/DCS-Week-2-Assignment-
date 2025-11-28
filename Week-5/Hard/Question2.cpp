// Rewrite Fibonacci using tail recursion.
#include <iostream>
using namespace std;

int fibonacciTail(int n, int a = 0, int b = 1) {
    if (n == 0)
        return a;
    return fibonacciTail(n - 1, b, a + b);
}

int main() {
    int n;
    cin >> n;

    cout << fibonacciTail(n);
    return 0;
}

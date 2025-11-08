//to find the largest and smallest of two numbers using `fmax()` and `fmin()`.
#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    double maximum = fmax(a, b);
    double minimum = fmin(a, b);

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum << endl;

    return 0;
}

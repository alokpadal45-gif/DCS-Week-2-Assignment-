// to find the square root, power, and absolute value of a number using mathematical functions.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;

    cout << "Number: ";
    cin >> num;

    double squareRoot = sqrt(fabs(num));
    cout << "Square root of " << fabs(num) << " = " << squareRoot << endl;

    double powerResult = pow(2, 3);
    cout << "2 raised to power 3 = " << powerResult << endl;

    double absoluteValue = fabs(num);
    cout << "Absolute value of " << num << " = " << absoluteValue << endl;

    return 0;
}

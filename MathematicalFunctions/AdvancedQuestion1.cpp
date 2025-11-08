//to calculate the roots of a quadratic equation
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, D, root1, root2;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    D = b * b - 4 * a * c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        cout << "Roots are real and distinct: " << root1 << " and " << root2 << endl;
    }
    else if (D == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and equal: " << root1 << endl;
    }
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-D) / (2 * a);
        cout << "Roots are imaginary: " << realPart << " + " << imaginaryPart << "i and "
             << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}


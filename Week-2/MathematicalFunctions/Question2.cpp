//to calculate the sine, cosine, and tangent of an angle in radians.
#include <iostream>
#include <cmath>
#define PI 3.141592653589793238

using namespace std;

int main() {
    double angle;

    cout << "Angle (in radians): ";
    cin >> angle;

    double sineValue = sin(angle);
    double cosineValue = cos(angle);
    double tangentValue = tan(angle);

    double degree = angle * (180 / PI);

    cout << "sin(" << degree << "°) = " << sineValue << endl;
    cout << "cos(" << degree << "°) = " << cosineValue << endl;
    cout << "tan(" << degree << "°) = " << tangentValue << endl;

    return 0;
}

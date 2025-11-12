#include <iostream>
#include <cmath>
using namespace std;

int power(int base, int exponent = 2) {
    return pow(base, exponent);
}

int main() {
    cout << "5^2 = " << power(5) << endl;       
    cout << "2^3 = " << power(2, 3) << endl;    
    return 0;
}

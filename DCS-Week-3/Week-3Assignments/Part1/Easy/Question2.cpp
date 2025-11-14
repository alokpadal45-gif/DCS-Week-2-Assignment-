// Print Multiplication Table (Using do-while loop)
#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    cout << "Enter number: ";
    cin >> num;

    do {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}

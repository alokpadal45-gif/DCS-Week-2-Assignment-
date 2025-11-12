#include <iostream>
using namespace std;

void square(int n) {
    n = n * n;
    cout << "Square inside function: " << n << endl;
}

int main() {
    int num = 5;
    square(num);  
    cout << "Original number in main: " << num << endl;
    return 0;
}

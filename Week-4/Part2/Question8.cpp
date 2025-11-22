// Write a function printMatrix() that prints a 3×3 matrix.
#include <iostream>
using namespace std;

void printMatrix(int arr[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printMatrix(arr);
    return 0;
}

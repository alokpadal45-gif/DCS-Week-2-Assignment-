//Find Largest Element in Each Row
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];


    cout << "Enter 9 elements for a 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        int maxVal = arr[i][0];

        for (int j = 1; j < 3; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }

        cout << "Largest in row " << i + 1 << " = " << maxVal << endl;
    }

    return 0;
}

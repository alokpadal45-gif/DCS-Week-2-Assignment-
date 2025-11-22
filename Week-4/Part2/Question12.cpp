// Print only the boundary elements of an N×N matrix.
#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    cout << "Boundary: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0 || i == 2 || j == 0 || j == 2)
                cout << arr[i][j] << " ";
        }
    }

    return 0;
}

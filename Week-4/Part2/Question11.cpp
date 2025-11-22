// Reverse each column of a 2D array.
#include <iostream>
using namespace std;

int main() {
    int arr[3][2] = {{1,2},{3,4},{5,6}};

    for (int j = 0; j < 2; j++) {
        int top = 0, bottom = 2;
        while (top < bottom) {
            int temp = arr[top][j];
            arr[top][j] = arr[bottom][j];
            arr[bottom][j] = temp;
            top++;
            bottom--;
        }
    }

    cout << "Reversed columns:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

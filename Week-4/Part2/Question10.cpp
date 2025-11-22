// Reverse the contents of each row in a matrix.
#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {{1,2,3},{4,5,6}};

    for (int i = 0; i < 2; i++) {
        int start = 0, end = 2;
        while (start < end) {
            int temp = arr[i][start];
            arr[i][start] = arr[i][end];
            arr[i][end] = temp;
            start++;
            end--;
        }
    }

    cout << "Reversed rows:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//  Print Row-wise and Column-wise Sums
#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

    cout << "Row sums: ";
    for (int i = 0; i < 3; i++) {
        int rsum = 0;
        for (int j = 0; j < 3; j++)
            rsum += arr[i][j];
        cout << rsum << " ";
    }
    cout << endl;

    cout << "Column sums: ";
    for (int j = 0; j < 3; j++) {
        int csum = 0;
        for (int i = 0; i < 3; i++)
            csum += arr[i][j];
        cout << csum << " ";
    }

    return 0;
}


//  Sum of Elements Using a Function
#include <iostream>
using namespace std;

int sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The sum of all elements is: " << sum(arr, n) << endl;

    return 0;
}

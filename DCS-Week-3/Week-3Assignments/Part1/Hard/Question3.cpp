// Print Floyd’s triangle up to N rows.
#include <iostream>
using namespace std;

int main() {
    int N, count = 1;
    cout << "Enter number of rows: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}

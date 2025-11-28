// Solve the Tower of Hanoi puzzle for n disks.
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char target) {
    if (n == 0)
        return;

    towerOfHanoi(n - 1, source, target, auxiliary);

    cout << "Move disk " << n << " from " << source << " to " << target << endl;

    towerOfHanoi(n - 1, auxiliary, source, target);
}

int main() {
    int n;
    cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}

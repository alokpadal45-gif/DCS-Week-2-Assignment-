// Reverse a given string using recursion.
#include <iostream>
using namespace std;

void reverseString(string &s, int start, int end) {
    if (start >= end)
        return;
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;

    reverseString(s, start + 1, end - 1);
}

int main() {
    string s;
    cin >> s;

    reverseString(s, 0, s.length() - 1);
    cout << s;
    return 0;
}

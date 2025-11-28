// Write a recursive function to check if a string is a palindrome.
#include <iostream>
using namespace std;

bool isPalindrome(string &s, int start, int end) {
    if (start >= end)
        return true;

    if (s[start] != s[end])
        return false;

    return isPalindrome(s, start + 1, end - 1);
}

int main() {
    string s;
    cin >> s;

    if (isPalindrome(s, 0, s.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

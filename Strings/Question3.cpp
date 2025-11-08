//to check if a string is a palindrome.
#include <iostream>
#include <algorithm>   
using namespace std;

int main() {
    string str, rev;

    cout << "Enter a string: ";
    cin >> str;

    rev = str;                      
    reverse(rev.begin(), rev.end()); 
    if (str == rev)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}

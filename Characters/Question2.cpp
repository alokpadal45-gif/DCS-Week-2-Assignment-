// to convert lowercase letters to uppercase and vice versa.
#include <iostream>
#include <cctype>  
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (islower(ch)) {
        cout << "Uppercase: " << char(toupper(ch)) << endl;
    }
    else if (isupper(ch)) {
        cout << "Lowercase: " << char(tolower(ch)) << endl;
    }
    else {
        cout << "Invalid! Please enter an alphabet." << endl;
    }

    return 0;
}

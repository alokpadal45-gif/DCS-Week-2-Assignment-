//Remove all vowels from a string.
#include <iostream>
#include <cctype>   
using namespace std;

int main() {
    string str, result;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result += str[i];
        }
    }

    cout << result << endl;

    return 0;
}

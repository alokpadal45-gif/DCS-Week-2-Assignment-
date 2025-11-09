//Count how many times each alphabet appears in a string (ignore case).
#include <iostream>
#include <cctype>  
using namespace std;

int main() {
    string str;
    int freq[26] = {0};

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch))
            freq[ch - 'a']++;
    }

    cout << "Character frequencies:" << endl;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout << char(i + 'a') << ":" << freq[i] << "  ";
    }

    cout << endl;
    return 0;
}

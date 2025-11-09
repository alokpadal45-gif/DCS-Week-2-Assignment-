//Check if two strings are anagrams (contain same characters in any order).
#include <iostream>
#include <algorithm>
#include <cctype>      
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;


    for (int i = 0; i < str1.length(); i++)
        str1[i] = tolower(str1[i]);
    for (int i = 0; i < str2.length(); i++)
        str2[i] = tolower(str2[i]);

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2)
        cout << "Strings are anagrams." << endl;
    else
        cout << "Strings are not anagrams." << endl;

    return 0;
}

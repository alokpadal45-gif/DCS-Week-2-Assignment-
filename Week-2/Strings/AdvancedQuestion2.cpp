// to find and print the longest word from a sentence.
#include <iostream>
#include <sstream>   
using namespace std;

int main() {
    string sentence, word, longestWord;
    int maxLength = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);

    while (ss >> word) {
        if (word.length() > maxLength) {
            maxLength = word.length();
            longestWord = word;
        }
    }

    cout << "Longest word: " << longestWord << endl;

    return 0;
}

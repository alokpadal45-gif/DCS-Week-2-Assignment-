//Count how many words are in a sentence.
#include <iostream>
#include <cctype>  
using namespace std;

int main() {
    string sentence;
    int wordCount = 0;
    bool inWord = false;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        if (!isspace(sentence[i]) && !inWord) {
            inWord = true;
            wordCount++;
        } 
        else if (isspace(sentence[i])) {
            inWord = false;
        }
    }

    cout << "Number of words: " << wordCount << endl;

    return 0;
}

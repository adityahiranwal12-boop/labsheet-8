// Program 5: Count words in a string
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

size_t countWords(const string& text) {
    size_t count = 0;
    bool inWord = false;
    for (unsigned char ch : text) {
        if (isspace(ch)) inWord = false;
        else if (!inWord) { ++count; inWord = true; }
    }
    return count;
}

int main() {
    string text;
    cout << "Enter a line: ";
    getline(cin, text);
    cout << "Word count: " << countWords(text) << '\n';
}

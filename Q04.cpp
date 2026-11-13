// Program 4: Copy a string
#include <iostream>
#include <string>
using namespace std;

void copyString(string& destination, const string& source) {
    destination = source;
}

int main() {
    string source, copy;
    cout << "Enter a line: ";
    getline(cin, source);
    copyString(copy, source);
    cout << "Copied string: " << copy << '\n';
}

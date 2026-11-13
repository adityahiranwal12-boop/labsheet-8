// Program 2: Print the Fibonacci series
#include <iostream>
using namespace std;

void printFibonacci(int count) {
    long long a = 0, b = 1;
    for (int i = 0; i < count; ++i) {
        cout << a << (i + 1 == count ? '\n' : ' ');
        long long next = a + b;
        a = b;
        b = next;
    }
    if (count == 0) cout << '\n';
}

int main() {
    int count;
    cout << "How many terms? ";
    cin >> count;
    if (count < 0) { cout << "Enter a non-negative count.\n"; return 1; }
    printFibonacci(count);
}

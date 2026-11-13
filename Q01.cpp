// Program 1: Find a prime number
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int d = 2; d <= n / d; ++d)
        if (n % d == 0) return false;
    return true;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << n << (isPrime(n) ? " is prime.\n" : " is not prime.\n");
}

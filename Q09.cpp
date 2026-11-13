// Program 9: Swap two numbers using call by reference
#include <iostream>
using namespace std;

void swapNumbers(int& a, int& b) {
    int temporary = a;
    a = b;
    b = temporary;
}

int main() {
    int a, b; cout << "Enter two integers: "; cin >> a >> b;
    swapNumbers(a, b);
    cout << "After swap: " << a << ' ' << b << '\n';
}

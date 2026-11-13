// Program 14: Function overloading: Calculator addition
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) const { return a + b; }
    double add(double a, double b) const { return a + b; }
};
int main() {
    Calculator calculator;
    int a, b; double x, y;
    cout << "Enter two integers: "; cin >> a >> b;
    cout << "Integer sum: " << calculator.add(a, b) << '\n';
    cout << "Enter two decimal numbers: "; cin >> x >> y;
    cout << "Decimal sum: " << calculator.add(x, y) << '\n';
}

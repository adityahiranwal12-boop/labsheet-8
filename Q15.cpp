// Program 15: Abstraction: Shape, Circle, and Rectangle
#include <iostream>
#include <memory>
#include <vector>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};
class Circle : public Shape {
    double radius;
public:
    explicit Circle(double r) : radius(r) {}
    double area() const override { return 3.141592653589793 * radius * radius; }
};
class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override { return width * height; }
};
int main() {
    double radius, width, height;
    cout << "Circle radius: "; cin >> radius;
    cout << "Rectangle width and height: "; cin >> width >> height;
    Circle circle(radius); Rectangle rectangle(width, height);
    cout << fixed << setprecision(2);
    cout << "Circle area: " << circle.area() << '\n';
    cout << "Rectangle area: " << rectangle.area() << '\n';
}

// Program 11: Car class with multiple objects
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car {
    string brand;
    double price{};
public:
    Car(string b, double p) : brand(move(b)), price(p) {}
    void display() const { cout << "Brand: " << brand << ", price: " << price << '\n'; }
};

int main() {
    int n; cout << "Number of cars: "; cin >> n;
    if (n < 0) return 1;
    vector<Car> cars;
    for (int i=0; i<n; ++i) {
        string brand; double price;
        cout << "Car " << i+1 << " brand and price: ";
        cin >> ws; getline(cin, brand); cin >> price;
        cars.emplace_back(brand, price);
    }
    for (const Car& car : cars) car.display();
}

// Program 10: Student class with member functions
#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNo{};
    double marks{};
public:
    void input() {
        cout << "Name: "; getline(cin >> ws, name);
        cout << "Roll number: "; cin >> rollNo;
        cout << "Marks: "; cin >> marks;
    }
    void display() const {
        cout << "Name: " << name << "\nRoll number: " << rollNo << "\nMarks: " << marks << "\n";
    }
};

int main() { Student student; student.input(); student.display(); }

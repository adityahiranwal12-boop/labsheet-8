// Program 13: Single inheritance: Person and Student
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age{};
public:
    void inputPerson() {
        cout << "Name: "; getline(cin >> ws, name);
        cout << "Age: "; cin >> age;
    }
    void displayPerson() const { cout << "Name: " << name << "\nAge: " << age << '\n'; }
};
class Student : public Person {
    double marks{};
public:
    void input() { inputPerson(); cout << "Marks: "; cin >> marks; }
    void display() const { displayPerson(); cout << "Marks: " << marks << '\n'; }
};
int main() { Student student; student.input(); student.display(); }

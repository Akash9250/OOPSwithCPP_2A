#include <iostream>
using namespace std;

class Employee {
    int employeeId;
    string name;
    float salary;

public:
    Employee() {
        employeeId = 0;
        name = "Unknown";
        salary = 0;
    }

    Employee(int id, string n, float s) {
        employeeId = id;
        name = n;
        salary = s;
    }

    Employee(const Employee &e) {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    void display() const {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    void updateSalary(float newSalary) {
        salary = newSalary;
    }
};

int main() {
    const Employee e1(101, "Akash", 50000);

    e1.display();

    Employee e2(e1);

    cout << "\nCopied Employee:\n";
    e2.display();

    e2.updateSalary(60000);
    e2.display();
    


    return 0;
}
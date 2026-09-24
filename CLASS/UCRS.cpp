#include <iostream>
#include <string>
using namespace std;

class Student {
    int rollNo;
    string name;
    double CGPA;

public:
    Student(int rollNo, string name) {
        this->rollNo = rollNo;
        this->name = name;
        this->CGPA = 0.0; 
    }

    Student(int rollNo, string name, double CGPA) {
        this->rollNo = rollNo;
        this->name = name;
        this->CGPA = CGPA;
    }

    void updateCGPA(double CGPA) {
        this->CGPA = CGPA; 
    }

    class Address {
        string city;
        string state;
    public:
        Address(string city, string state) {
            this->city = city;
            this->state = state;
        }
        void displayAddress() {
            cout << "City: " << city << ", State: " << state << endl;
        }
    };

    void displayStudentInfo() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << CGPA << endl;
    }
};

int main() {
    Student students[5] = {
        Student(101, "Akash"),
        Student(102, "Ansh", 8.5),
        Student(103, "Aditya"),
        Student(104, "astitva", 8.7),
        Student(105, "Krrish")
    };

    students[0].updateCGPA(8.4);
    students[2].updateCGPA(8.8);
    students[4].updateCGPA(8.0);

    for (int i = 0; i < 5; i++) {
        students[i].displayStudentInfo();
        Student::Address addr("Ghaziabad", "Uttar Pradesh");
        addr.displayAddress();
        cout << "-------------------------" << endl;
    }

    return 0;
}
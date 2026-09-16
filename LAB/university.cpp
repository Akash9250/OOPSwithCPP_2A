#include <iostream>
using namespace std;

class University {
    string universityName;

public:
    University(string name) {
        universityName = name;
    }

    class Department {
        string departmentName;
        int studentCount;

    public:
        Department(string dept, int count) {
            departmentName = dept;
            studentCount = count;
        }

        void display(University &u) {
            cout << "University Name: " << u.universityName << endl;
            cout << "Department Name: " << departmentName << endl;
            cout << "Student Count: " << studentCount << endl;
        }
    };
};

int main() {
    University u("ABES Engineering College");

    University::Department d("CSE AI & ML", 80);

    d.display(u);

    return 0;
}
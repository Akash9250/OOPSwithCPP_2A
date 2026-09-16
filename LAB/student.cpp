#include <iostream>
using namespace std;

class StudentResult {
    int rollNo;
    string name;
    float marks1, marks2, marks3;

    static int totalStudents;

public:
    StudentResult(int r, string n, float m1, float m2, float m3) {
        rollNo = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;

        totalStudents++;
    }

    friend class ResultAnalyzer;

    static void showTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }

    ~StudentResult() {
        cout << "StudentResult object destroyed." << endl;
    }
};

int StudentResult::totalStudents = 0;

class ResultAnalyzer {
public:
    void analyze(StudentResult &s) {
        float total = s.marks1 + s.marks2 + s.marks3;
        float percentage = total / 3;

        cout << "Roll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (s.marks1 >= 33 && s.marks2 >= 33 && s.marks3 >= 33)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main() {
    StudentResult s1(101, "Aditya", 80, 75, 90);
    StudentResult s2(102, "Akash", 60, 70, 65);

    ResultAnalyzer analyzer;

    analyzer.analyze(s1);
    cout << endl;

    analyzer.analyze(s2);
    cout << endl;

    StudentResult::showTotalStudents();

    return 0;
}
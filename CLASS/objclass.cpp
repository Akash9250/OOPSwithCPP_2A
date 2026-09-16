#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string Name;
    int RollNumber;
    int Grade;
    void input(){
        cout<<"Enter Student Name: ";
        getline(cin,Name);
        cout<<"Enter Roll Number: ";
        cin>>RollNumber;
        cout<<"Enter Grade: ";
        cin>>Grade;
    }
    void display(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Roll Number: "<<RollNumber<<endl;
        cout<<"Grade: "<<Grade<<endl;
    }
    void GradeDisplay()  {
        if(Grade>100){
            cout<<"Invalid"<<endl;
        }
        else if(Grade>=60){
            cout<<"First Division."<<endl;
        }
        else if(Grade>=45){
            cout<<"Second Division."<<endl;
        }
        else if(Grade>=35){
            cout<<"Third Division."<<endl;
        }
        else{
            cout<<"Fail."<<endl;
        }
    }
};
int main()  {
    Student s;
    s.input();
    s.display();
    s.GradeDisplay();b
    return 0;
} 
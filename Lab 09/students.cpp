#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string name;
    int rollno;
    float marks;
};

int main()
{
    Student s;
    cout << "Enter the name of the student: ";
    getline(cin, s.name);
    cout << "Enter the roll number of the student: ";
    cin >> s.rollno;
    cout << "Enter the marks of the student: ";
    cin >> s.marks;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollno << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
#include <iostream>
using namespace std;
struct Student
{
    int rollNo;
    float marks[5];
};
int main()
{
    Student s;
    float avg = 0;
    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> s.marks[i];
        avg += s.marks[i];
    }
    avg /= 5;
    cout << "Roll number: " << s.rollNo << endl;
    cout << "Average marks: " << avg << endl;
    return 0;
}
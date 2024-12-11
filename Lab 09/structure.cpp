#include <iostream>
#include <string.h>
using namespace std;
struct Person
{
    string name;
    // char name[50];
    int age;
    float salary;
};

int main()
{
    Person p1 = {"Ali", 25, 5000.0};
    Person p2;
    p2.name = "Ahmed";
    p2.age = 30;
    p2.salary = 6000.0;
    Person p3;
    cout << "Enter name: ";
    cin >> p3.name;
    cout << "Enter age: ";
    cin >> p3.age;
    cout << "Enter salary: ";
    cin >> p3.salary;
    cout << "Person " << 1 << ":\n";
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary << endl;
    return 0;
}
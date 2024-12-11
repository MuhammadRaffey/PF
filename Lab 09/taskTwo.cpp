#include <iostream>
using namespace std;

struct Emoployee
{
    string name;
    int codeNumber;
    float salary;
    int grade;
};

int main()
{
    Emoployee e1 = {"Raffey", 123, 10000.0, 1}, e2 = {"Annas", 456, 2000.0, 2};
    if (e1.salary > e2.salary)
    {
        cout << e1.name << " has a higher salary!" << endl;
    }
    else if (e1.salary < e2.salary)
    {
        cout << e2.name << " has a higher salary!" << endl;
    }
    else
    {
        cout << "Both employees have the same salary!" << endl;
    }
    return 0;
}
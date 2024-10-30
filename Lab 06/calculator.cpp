#include <iostream>
#include <stdexcept>
using namespace std;

int add(int a, int b);
int diff(int a, int b);
int prod(int a, int b);
int divide(int a, int b);

int main()
{
    // int a = 10, b = 0;
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
jump:
    int choice;
    cout << "Enter operation:\n (1) Addition, (2) Subtraction, (3) Multiplication, (4) Division: \t";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Addition: " << add(a, b) << endl;
    }
    else if (choice == 2)
    {
        cout << "Subtraction: " << diff(a, b) << endl;
    }
    else if (choice == 3)
    {
        cout << "Multiplication: " << prod(a, b) << endl;
    }
    else if (choice == 4)
    {
        try
        {
            double res = divide(a, b);
            cout << "Division: " << res << endl;
        }
        catch (const invalid_argument &e)
        {
            cout << "Error: " << e.what() << endl;
        }
    }
    else
    {
        cout << "Invalid choice" << endl;
        exit(0);
    }
    goto jump;
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int diff(int a, int b)
{
    return a - b;
}

int prod(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b == 0)
    {
        throw invalid_argument("Denominator cannot be 0");
    }
    return a / b;
}

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int firstNum, secondNum;
    cout << "Enter two numbers: ";
    cin >> firstNum >> secondNum;
    int sumOfEven = 0;
    int sumOfSqOdd = 0;
    for (int i = firstNum; i <= secondNum; i++)
    {
        if (i <= 10)
        {
            // squrare all numbers less than 10
            cout << "Square of: " << i << " is:  " << i * i << "\n";
        }
        if (i % 2 == 0)
        {
            // even
            sumOfEven += i;
        }
        else
        {
            // odd
            cout << "\n   "
                 << i << " is Odd Number." << endl; // output all odd numbers
            sumOfSqOdd += i * i;
        }
    }
    cout << endl;
    cout << "Sum of even numbers: " << sumOfEven << endl;
    cout << "Sum of Square of Odd numbers: " << sumOfSqOdd << endl;
    return 0;
}
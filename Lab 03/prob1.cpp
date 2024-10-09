#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int firstNum, secondNum;
    cout << "=========================================\n";
    cout << "        Square and Sum Calculator        \n";
    cout << "=========================================\n";

    // Taking input
    cout << "Enter two numbers: ";
    cin >> firstNum >> secondNum;

    int sumOfEven = 0;
    int sumOfSqOdd = 0;

    cout << "\n\nSquares of numbers less than or equal to 10:\n";
    cout << "--------------------------------------------\n";

    for (int i = firstNum; i <= secondNum; i++)
    {
        if (i <= 10)
        {
            // Print squares of numbers less than or equal to 10
            cout << "Square of " << i << " is: " << i * i << "\n";
        }

        if (i % 2 == 0)
        {
            // Sum even numbers
            sumOfEven += i;
        }
        else
        {
            // Print odd numbers and calculate the sum of their squares
            cout << "\n   " << i << " is an Odd Number." << endl;
            cout << "   Square of " << i << " is: " << i * i << "\n";
            sumOfSqOdd += i * i;
        }
    }

    // Print results
    cout << "\n=========================================\n";
    cout << "                 Results                 \n";
    cout << "=========================================\n";
    cout << "Sum of all even numbers between " << firstNum << " and " << secondNum << ": " << sumOfEven << endl;
    cout << "Sum of squares of all odd numbers between " << firstNum << " and " << secondNum << ": " << sumOfSqOdd << endl;
    cout << "=========================================\n";

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int firstNum, secondNum, thirdNum;

    cout << "Enter Three Numbers: ";
    cin >> firstNum >> secondNum >> thirdNum;
    cout << "\n";

    // Check for equality first
    if (firstNum == secondNum && secondNum == thirdNum)
    {
        cout << "All Numbers are equal" << endl;
    }
    else
    {
        // Find the smallest, middle, and largest number
        int smallest, middle, largest;

        // Determine the smallest
        if (firstNum <= secondNum && firstNum <= thirdNum)
        {
            smallest = firstNum;
            middle = (secondNum <= thirdNum) ? secondNum : thirdNum;
            largest = (secondNum <= thirdNum) ? thirdNum : secondNum;
        }
        else if (secondNum <= firstNum && secondNum <= thirdNum)
        {
            smallest = secondNum;
            middle = (firstNum <= thirdNum) ? firstNum : thirdNum;
            largest = (firstNum <= thirdNum) ? thirdNum : firstNum;
        }
        else
        {
            smallest = thirdNum;
            middle = (firstNum <= secondNum) ? firstNum : secondNum;
            largest = (firstNum <= secondNum) ? secondNum : firstNum;
        }

        // Print the sorted order
        cout << "Sorted Numbers: " << smallest << " " << middle << " " << largest << endl;
    }

    return 0;
}

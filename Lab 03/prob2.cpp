#include <iostream>
using namespace std;
int main()
{
    int firstNum, secondNum, thirdNum;
    cout << "Enter Three Numbers: ";
    cin >> firstNum >> secondNum >> thirdNum;
    cout << "\n";
    if (firstNum < secondNum && firstNum < thirdNum)
    {
        secondNum < thirdNum ? cout << firstNum << " " << secondNum << " " << thirdNum : cout << firstNum << " " << thirdNum << " " << secondNum;
    }
    else if (secondNum < firstNum && secondNum < thirdNum)
    {
        firstNum < thirdNum ? cout << secondNum << " " << firstNum << " " << thirdNum : cout << secondNum << " " << thirdNum << " " << firstNum;
    }
    else
    {
        firstNum < secondNum ? cout << thirdNum << " " << firstNum << " " << secondNum : cout << thirdNum << " " << secondNum << " " << firstNum;
    }
    cout << endl;
    return 0;
}
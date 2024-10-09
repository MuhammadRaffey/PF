#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int uInp;
    int sum = 0;
    cout << "Enter a three-digit number: ";
    cin >> uInp;

    int check = 0;
    int originalNumber = uInp;

    while (uInp > 0)
    {
        int digits = uInp % 10;
        sum += digits;
        int powerByThree = pow(digits, 3);
        check += powerByThree;

        uInp = uInp / 10;
    }

    cout << "The Sum is: " << sum << endl;
    cout << "The Sum after cube is: " << check << endl;

    if (check == originalNumber)
    {
        cout << "The number is an Armstrong number.\n";
    }
    else
    {
        cout << "The number is not an Armstrong number.\n";
    }

    return 0;
}

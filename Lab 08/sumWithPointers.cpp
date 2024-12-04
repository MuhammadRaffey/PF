#include <iostream>
using namespace std;
int main()
{
    int a, b, sum;
    cout << "Enter a Number: ";
    cin >> a;
    int *ptr1 = &a;
    cout << "Enter a Number: ";
    cin >> b;
    int *ptr2 = &b;
    sum = *ptr1 + *ptr2;
    cout << "The Sum is: " << sum << endl;
    return 0;
}
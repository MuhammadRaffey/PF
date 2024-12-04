#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a Number: ";
    cin >> a;
    int *ptr = &a;
    cout << "The Value at This Adress: " << *ptr << endl;
    cout << "The Address is: " << ptr << endl;

    return 0;
}
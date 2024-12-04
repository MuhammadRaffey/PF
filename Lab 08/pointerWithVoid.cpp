#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a Number: ";
    cin >> a;
    void *ptr = &a;
    cout << "The Address is: " << ptr << endl;

    // cout << "The Value at This Adress: " << *ptr << endl;

    return 0;
}
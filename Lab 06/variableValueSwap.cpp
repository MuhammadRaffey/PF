#include <iostream>
using namespace std;
void swapWithoutTemp(int a, int b);
void swapWithtTemp(int a, int b);

int main()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;
    swapWithoutTemp(a, b);
    swapWithtTemp(a, b);
    return 0;
}
void swapWithoutTemp(int a, int b)
{
    a=a+b; 
    b=a-b; 
    a=a-b;
    cout << "Swapped without temp: " << a << " " << b << endl;
}
void swapWithtTemp(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Swapped with temp: " << a << " " << b << endl;
}
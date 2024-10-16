#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "A Element " << i << " is: " << a[i] << " \n";
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "B Element " << i << " is: " << b[i] << " \n";
    }
    return 0;
}
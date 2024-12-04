#include <iostream>
using namespace std;
int main()
{
    int arr[2][2] = {{1, 2}, {3, 4}};
    int *ptr = &arr[0][0];
    cout << ptr << endl;
    uintptr_t address = reinterpret_cast<uintptr_t>(ptr);
    cout << address << endl;

    if (address % 2 == 0)
    {
        cout << "Even\n";
    }
    else
    {
        cout << "Odd\n";
    }
    return 0;
}
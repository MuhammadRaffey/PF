#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value of *ptr: " << *ptr << endl;
    ptr++;
    cout << "Value of *ptr++: " << *ptr << endl;
    return 0;
}
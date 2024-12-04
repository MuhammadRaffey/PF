#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "You entered: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr++ << " ";
    }
    cout << endl;
    int *ptr2 = &arr[4];
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr2-- << " ";
    }
    cout << endl;

    return 0;
}
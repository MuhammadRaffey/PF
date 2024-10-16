#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int n[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> n[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << n[i] << " ";
    }
    return 0;
}
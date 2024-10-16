#include <iostream>
using namespace std;

int main()
{
    int n[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> n[i];
        sum += n[i];
    }
    cout << "Sum of the elements is " << sum << endl;
    return 0;
}
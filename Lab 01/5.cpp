#include <iostream>
#include <string>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
        sum += i;
    }
    cout << endl
         << "The Sum is: " << sum << endl;
}
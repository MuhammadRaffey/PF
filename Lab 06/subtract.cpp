#include <iostream>
using namespace std;
int diff(int a, int b);
int main()
{
    int a = 10, b = 5;
    cout << diff(a, b) << endl;

    return 0;
}
int diff(int a, int b)
{
    return a - b;
}
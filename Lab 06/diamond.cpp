#include <iostream>
using namespace std;
void diamond();
void diamond1();
int main()
{
    diamond();
    cout << endl;
    cout << "--------------------------------------";
    cout << endl;
    diamond1();
    return 0;
}
void diamond()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void diamond1()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k += 1)
        {

            cout << " *";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = n - 1; k >= i; k -= 1)
        {

            cout << " *";
        }
        cout << endl;
    }
}
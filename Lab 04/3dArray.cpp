#include <iostream>
using namespace std;

int main()
{
    int n = 2;
    int r = 2;
    int c = 2;
    int a[n][r][c];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < r; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cin >> a[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < r; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cout << a[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
}
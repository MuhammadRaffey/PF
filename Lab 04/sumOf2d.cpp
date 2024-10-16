#include <iostream>
using namespace std;

int main()
{
    int r = 2;
    int c = 2;
    int a[r][c];
    int b[r][c];
    int sum[r][c];
    cout << "First Matrix" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    cout << "Second Matrix" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << endl;
    cout << "Sum of the matrices" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }
}
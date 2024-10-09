#include <iostream>
using namespace std;
// using loops to print prime numbers from 2-30
int main()
{
    int i, j, prime;
    for (i = 2; i <= 30; i++)
    {
        prime = 1;
        for (j = 2; j <= i-1; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
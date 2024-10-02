#include <iostream>
using namespace std;
int main()
{
    float sum = 0;
    int max = 0;
    int min = 1;
    float count = 0;
    float avg;
    while (true)
    {
        int n;
        cout << "Enter a positive number: ";
        cin >> n;

        if (n < 0)
        {
            cout << "The Sum is: " << sum << endl;
            cout << "The Average is: " << avg << endl;
            cout << "The max num is: " << max << endl;
            cout << "The min num is: " << min << endl;
            break;
        }
        else
        {
            sum += n;
            count++;
            avg = sum / count;
            if (n > max)
            {
                max = n;
            }
            if (n < min && n > 0)
            {
                min = n;
            }
        }
    }

    return 0;
}
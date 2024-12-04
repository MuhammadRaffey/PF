#include <iostream>
using namespace std;

void bubbleSort(int *ptr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}

int main()
{
    int arr[2][2];
    int *ptr = &arr[0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter element " << i + 1 << " " << j + 1 << ": ";
            cin >> *(ptr + i * 2 + j);
        }
    }

    cout << "\n------------------------\nYou entered:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << *(ptr + i * 2 + j) << " ";
        }
        cout << endl;
    }
    cout << "------------------------\n";

    bubbleSort(ptr, 4);
    cout << "Sorted array:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << *(ptr + i * 2 + j) << " ";
        }
        cout << endl;
    }

    return 0;
}

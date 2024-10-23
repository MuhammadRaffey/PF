#include <iostream>
using namespace std;
int main()
{
	int size = 22;
	int A[size] = {64, 36, 56, 47, 40, 54, 61, 60, 58, 64, 54, 48, 49, 45, 63, 54, 50, 49, 51, 60, 58, 59};
	cout << "Unsorted array:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (A[j - 1] < A[j])
			{
				int temp = A[j - 1];
				A[j - 1] = A[j];
				A[j] = temp;
			}
		}
	}
	cout << "Sorted array:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << "\t";
	}

	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int n = 10;
	int A[n] = {1, 3, 2, 9, 4, 6, 7, 11, 8, 67};
	cout << "Unsorted array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (A[j] < A[min])
			{
				min = j;
				int temp = A[j - 1];
				A[j - 1] = A[j];
				A[j] = temp;
			}
		}
	}
	cout << "SELECTION SORT:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << "\t";
	}

	return 0;
}

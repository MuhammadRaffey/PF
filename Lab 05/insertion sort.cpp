#include <iostream>
using namespace std;
int main()
{
	int n = 12;
	int A[n] = {1, 3, 2, 9, 4, 6, 7, 11, 8, 67, 14, 64};
	cout << "Unsorted array:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << "\t";
	}
	cout << endl;
	for (int i = 1; i < n; i++)

	{
		int temp = A[i];
		int j;
		for (j = i; j > 0 && A[j - 1] > temp; j--)
		{
			A[j] = A[j - 1];
		}
		A[j] = temp;
	}
	cout << "INSERTION SORT:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << "\t";
	}

	return 0;
}

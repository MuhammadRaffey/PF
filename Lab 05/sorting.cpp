#include <iostream>
using namespace std;
int main()
{
	int list[] = {32, 45, 23, 78, 45, 98, 14};
	int size = 7;
	int key = 78;
	int first = 0, last, mid;
	last = size - 1;
	mid = (first + last) / 2;
	while (first <= key)
	{
		if (list[mid] < key)
		{
			first = mid + 1;
		}
		if (list[mid] == key)
		{
			cout << key << "is present at " << mid + 1;
			break;
		}
		else
		{
			last = mid - 1;
		}
		mid = (first + last) / 2;
	}
	if (first > last)
	{
		cout << key << "Is not present" << endl;
	}
	return 0;
}

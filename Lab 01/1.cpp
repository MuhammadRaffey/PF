#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, c, r;
    cout << "Enter The First Number:  ";
    cin >> a; // 5
    cout << "Enter The Second Number:  ";
    cin >> b; // 2
    c = 1;
    r = 1;
    do
    {
        r = r * a; // 1*5 //5*5
        c++;       // 2 //3

    } while (c <= b);
    cout << "Results are:  " << r;
    return 0;
}

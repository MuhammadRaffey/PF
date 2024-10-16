#include <iostream>
#include <unistd.h>
// #include <windows.h> //DOES NOT WORK ON LINUX
using namespace std;

int main()
{
    // system("Color XY"); //DOES NOT WORK ON LINUX
    int n[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        sleep(2);
        cout << n[i] << " ";
    }
    return 0;
}
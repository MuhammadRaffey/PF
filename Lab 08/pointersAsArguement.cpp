#include <iostream>
#include <ctime>
using namespace std;
void getSeconds(unsigned long *par)
{
    *par = time(NULL);
}
int main()
{
    unsigned long sec;
    getSeconds(&sec);
    cout << "Number of seconds: " << sec << endl;
    return 0;
}
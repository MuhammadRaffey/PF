#include <iostream>
using namespace std;

struct Marks
{
    int sub[5];

    int totalMarks()
    {
        int total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += sub[i];
        }
        return total;
    }
    float avgMarks()
    {
        return totalMarks() / 5.0;
    }
};

int main()
{
    return 0;
}
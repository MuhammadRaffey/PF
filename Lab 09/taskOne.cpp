#include <iostream>
using namespace std;

struct Race
{
    string name;
    int distance;
    int min;
    int sec;
};
int main()
{
    Race p1 = {"Raffey", 1000, 10, 50}, p2 = {"Annas", 1000, 12, 20};
    int time1 = p1.min * 60 + p1.sec;
    float velocity1 = p1.distance / time1;
    int time2 = p2.min * 60 + p2.sec;
    float velocity2 = p2.distance / time2;
    if (velocity1 < velocity2)
    {
        cout << p1.name << " is The Winner" << endl;
    }
    else if (velocity1 > velocity2)
    {
        cout << p2.name << " is The Winner" << endl;
    }
    else
    {
        cout << "Both are equal" << endl;
    }

    return 0;
}
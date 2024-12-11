#include <iostream>
using namespace std;

struct Race
{
    string name;
    float distance;
    int min;
    int sec;
};

int main()
{
    Race p1 = {"Raffey", 1000.0, 10, 30}, p2 = {"Annas", 1000.0, 11, 10};

    float time1 = p1.min * 60 + p1.sec;
    float velocity1 = p1.distance / time1;

    float time2 = p2.min * 60 + p2.sec;
    float velocity2 = p2.distance / time2;

    if (velocity1 > velocity2)
    {
        cout << p1.name << " is the winner!" << endl;
    }
    else if (velocity1 < velocity2)
    {
        cout << p2.name << " is the winner!" << endl;
    }
    else
    {
        cout << "Both runners have the same speed!" << endl;
    }

    return 0;
}
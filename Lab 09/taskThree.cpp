#include <iostream>
using namespace std;
struct Result
{
    float per[5];
};

Result percentage(float sub[5])
{
    Result result;
    for (int i = 0; i < 5; i++)
    {
        result.per[i] = (sub[i] / 100) * 100;
    }
    return result;
}

int main()
{
    float subjects[5] = {85, 90, 78, 92, 88};

    Result percentages = percentage(subjects);

    cout << "Percentages: ";
    for (int i = 0; i < 5; i++)
    {
        cout << percentages.per[i] << " ";
    }
    cout << endl;

    return 0;
}
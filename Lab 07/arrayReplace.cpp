#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[2][3] = {{"Raffey", "Annas", "Zain"},
                          {"Jawad", "Jahanzaib", "Zia"}};
    cout << "Original Array" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << names[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\n--------------------------------\n\n";
    cout << "Array after replacing 'a' with 'e'.\n"
         << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            string name = names[i][j];
            for (int i = 0; i < name.length(); i++)
            {
                if (name[i] == 'a')
                {
                    name[i] = 'e';
                }
                else if (name[i] == 'A')
                {
                    name[i] = 'E';
                }
            }
            cout << name << endl;
        }
        cout << endl;
    }

    return 0;
}
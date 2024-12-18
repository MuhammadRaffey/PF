#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string name;
    ofstream file;
    string filename = "cities.txt";
    file.open(filename);
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the Name of City: ";
        cin >> name;
        if (file.fail())
        {
            cout << "Error opening file" << endl;
            return 1;
        }
        file << name << endl;
    }
    file.close();

    return 0;
}
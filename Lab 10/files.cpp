#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "Enter your Name: ";
    cin >> name;
    ofstream file;
    string filename = name + ".txt";
    file.open(filename);
    if (file.fail())
    {
        cout << "Error opening file" << endl;
        return 1;
    }
    file << "Hello my Name is " + name + ". " << endl;
    file.close();
    return 0;
}
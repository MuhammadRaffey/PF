#include <iostream>
using namespace std;

int main()
{
    int n, m;
    for(n = 1; n <= 5; n++){
        for(m = 1; m <= 5; m++){
            if (n == 1 || m == 1 || n == 5 || m == 5){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    for (int i=1; i<=3; i++){
        for (int j=0; j<3-i;j++)
            cout << "*" << " ";
    cout << endl;
    }
}
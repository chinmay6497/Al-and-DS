#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i+1 >= n-j)
                cout << "*";
            
            else
                cout << " ";
        }
        cout << endl;
    }
}
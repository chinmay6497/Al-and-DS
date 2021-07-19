#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    if ((n & n-1)==0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >>y;
    try
    {
        if (y==0)
            throw 0;
        cout << "Result is " << x/y;
    }
    catch(...)
    {
        cout << "Divisor is 0";
    }
    return 0;
}
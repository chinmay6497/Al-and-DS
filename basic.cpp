#include <iostream>
using namespace std;

void fun(int x)
{
    if (x == 0)
        return;
    cout << x << endl;
    fun(x-1);
    cout << x << endl;
}

int main()
{
    fun(3);
    return 0;
}
#include <iostream>
using namespace std;

void fun(int x)
{
    if (x == 0)
        return;
    else
    {
        cout <<"Hi";
        fun(x-1);
        cout <<"Hello";
    }
}

int main()
{
    fun(3);
    return 0;
}
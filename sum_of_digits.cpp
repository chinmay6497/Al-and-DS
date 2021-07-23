#include <iostream>
using namespace std;

int  sum_digit(int n)
{
    if (n == 0)
        return 0;
    return (n%10 + sum_digit(n/10));
}

int main()
{
    int x = 123;
    cout << sum_digit(x);
    return 0;
}
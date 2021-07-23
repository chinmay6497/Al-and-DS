#include <iostream>
using namespace std;

int sum_natural_numbers(int n)
{   if (n == 0)
        return 0;
    return n + sum_natural_numbers(n-1);
}
int main()
{
    int n = 3;
    cout << sum_natural_numbers(n);
    return 0;
}
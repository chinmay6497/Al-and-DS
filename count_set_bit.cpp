#include <iostream>
using namespace std;

void count_set_bit(int n)
{   int count = 0;
    while (n!=0)
    {
        if (n%2 !=0) {count++;}
        n = n/2;
    } cout << count;
}
int main()
{
    int n = 13;
    count_set_bit(n);
}
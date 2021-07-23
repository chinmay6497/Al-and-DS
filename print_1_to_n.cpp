#include <iostream>
using namespace std;

void rec_print(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    rec_print(n-1);
}

int main()
{
    rec_print(1);
    return 0;
}
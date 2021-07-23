#include <iostream>
using namespace std;

void rec_print(int n)
{   
    if (n == 0)
        return;
    rec_print(n-1);
    cout << n << endl;
}

int main()
{
    rec_print(5);
    return 0;
}
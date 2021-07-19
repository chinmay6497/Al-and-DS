#include <iostream>
using namespace std;

void kthbit(int n,int k)
{
    if (n & (1 << (k-1)) != 0)
        cout << "yes";
    else
        cout << "no";
}

int main()
{
    int n = 13;
    int k = 3;
    kthbit(n,k);
    return 0;

}
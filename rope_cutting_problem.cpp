#include <bits/stdc++.h>
using namespace std;

int rope_cutting(int n , int a , int b , int c)
{
    if (n < 0)
        return -1;
    if (n == 0)
        return 0;
    int res =  max(rope_cutting(n-a,a,b,c),max(rope_cutting(n-b,a,b,c),rope_cutting(n-c,a,b,c)));
    if (res == -1)
        return -1;
    return res+1;
}

int main()
{
    int n = 23 , a = 11, b = 9, c = 12;
    cout << rope_cutting(n,a,b,c);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 15;
    int b = 10;
    int res = min(a,b);
    while (res > 0){
        if (a % res ==0 && b % res ==0){
            break;
        } res --;
    }
    cout << res;
    return 0;
}
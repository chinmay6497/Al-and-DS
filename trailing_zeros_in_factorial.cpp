#include <iostream>
using namespace std;

int trailing_zero(int x)
{
    int count = 0;
    while (x % 10 == 0){
        count++;
        x = x/10;}
    return count;
}

int main()
{
    int x = 5;
    int res = 1;
    for (int i=1; i<=x; i++){
        res = res*i;
    }
    cout << trailing_zero(res);
    return 0;
}
// Here TC is O(n)
int main()
{
    int res = 0;
    int n = 251;
    for (int i = 5; i <=n;i=i*5){
        res = res +n/i;
    } cout << res;
}
// Here TC is O(logn)
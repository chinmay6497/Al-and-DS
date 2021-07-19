#include <bits/stdc++.h>
using namespace std;

int memo[6] = {-1,-1,-1,-1,-1,-1};

int fib (int n)
{   
    if (memo[n] == -1){
        int res;
    if ( n <= 1)
        res = n;
    else
        res = fib(n-1) + fib(n-2);
    memo[n] = res;
    }
    return memo[n];
}

int main()
{
    cout << fib(1);    

}
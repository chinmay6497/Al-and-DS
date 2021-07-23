#include <iostream>

int modInverse(int a, int m)
{
    //Your code here
    int res = -1;
    for (int i=1;i<=m;i++){
        if ((a*i)%m ==1);
            res = i;
    }
    return res;
}

int main()
{   
    int a = 3;
    int m = 11;
    int res = -1;
    cout << modInverse(a,m);
}
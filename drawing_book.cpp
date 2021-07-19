#include <bits/stdc++.h>
using namespace std;

int pageCount(int n, int p) {

     if (p==1 || p ==n)
        return 0;
    
    int res;
    for (int i=2; i<=n;i++){
        if (i == p)
            res = i/2;
    }

    if (n%2 == 0){
        for (int i=n-1; i>=2; i--){
        if (i == p)
            res = min(res,n-i-1);
        }
    }

    else{
        if (p == n-1)
            res = 0;

        else{
            for (int i=n-2;i >=2;i--){
                if (i == p)
                    res = min(res,n-i-2);
            }
        }
    }    
    
    return res;
}

int main()
{
    int n=37455;
    int p = 29835;

    cout << pageCount(n,p);
}
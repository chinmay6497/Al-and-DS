#include <bits/stdc++.h>
using namespace std;

int memo[1000][1000];

int lcs(string s1, string s2, int n, int m){

    if (memo[n][m] != -1)
        return memo[n][m];
    
    if ( m == 0 || n == 0)
        memo[n][m] =  0;
    
    else{
        if (s1[n-1] == s2[m-1])
            return memo[n][m] = 1 + lcs(s1,s2,n-1,m-1);
        
        else
            memo[n][m] = max(lcs(s1,s2,n-1,m), lcs(s1,s2,n,m-1));
    }
    return memo[n][m];

}
int main()
{
    string s1 = "axyz";
    string s2 = "baz";

    memset(memo,-1,sizeof(memo));
     
    cout << lcs(s1, s2,s1.length(),s2.length());
}
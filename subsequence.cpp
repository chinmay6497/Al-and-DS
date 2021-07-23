#include <bits/stdc++.h>
using namespace std;

bool subsequent(const string &s1, const string &s2, int n, int m)
{
    int j = 0;
    for (int i=0; i<n && j < m; i++){
        if (s1[i] == s2[j])
            j++;
    }
    return ( j == m);
}

int main()
{
    string s1 = "abcdef";
    string s2 = "ade";
    int n = s1.length();
    int m = s2.length();
    cout << subsequent(s1,s2,n,m);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v {10,2,20,30,40};
    // int n = sizeof(v)/sizeof(v[0]);
    // for (int i = 0; i < n; i++)
    //     cout << v[i]+5 <<" ";

    for (auto &x:v)
        x = x+5;
    for (auto x:v)
        cout <<x <<" ";
    
    
}
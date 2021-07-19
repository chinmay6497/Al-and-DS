#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,20,20,10,10,30,50,10,20};
    int n = 9;

    unordered_map<int,int> mp;

    for (int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    int res = 0;
    for (auto x: mp){
        res+= floor(x.second /2);
        // cout << x.first << " " << x.second <<" "<< res << endl;

    }
    // cout << floor(1);

    cout << res;

}
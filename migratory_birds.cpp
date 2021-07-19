#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> arr(5,0);
    int arr[] = {1,2,3,4,5,4,3,2,1,3,4};
    int n = 11;
    unordered_map<int, int> mp;

    for (int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    int freq = 0;
    int res;

    for (auto x:mp){
        if (x.second > freq){
            freq = x.second;
            res = x.first;
        }

        else if (x.second == freq && x.first < res)
            res = x.first;
            
    }

    cout << res;

}
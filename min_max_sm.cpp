#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    arr = {1,2,3,4,5};
    int n = 5;
    int mx = arr[0];
    int mn = arr[0];
    // int res = 0;

    for (int i=0; i<n; i++){
        int res = 0;
        arr.remove(i);
        res += arr[i];
        arr.push_back(i);
        cout << res;
    }

}
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // int arr[] = {10,30,5,300,20};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int mx = 0;

    // for (int i=0;i<n;i++)
    // {
    //     if (arr[i] > mx)
    //         mx = arr[i];
    // }
    // cout << mx;        
    // int res = *max_element(arr,arr+n);
    // cout <<res;
    vector<int> v {10,20,30,400};
    int res = *max_element(v.begin(),v.end());
    cout << res;
}

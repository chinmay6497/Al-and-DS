#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sm = 0;
    // for (int i=0;i<n;i++)
    // {
    //     sm+=arr[i];
    // }
    // cout << sm;
    sm = accumulate(arr,arr+n,sm);
    cout <<sm;
}

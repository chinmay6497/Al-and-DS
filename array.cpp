#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[6]{10,20,30,40,50} ;
    // // int n = sizeof(arr)/sizeof(arr[0]);
    // // for (int i=0;i<n;i++)
    // // cout <<arr[i] <<" ";
    int arr[6] = {10,20,3,0,2,4};
    cout << arr[3] <<endl;
    int b = 4, *p = &b;
    cout << p << endl;
    *p = 5;
    cout << &b;
}
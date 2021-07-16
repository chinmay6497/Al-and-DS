#include <iostream>
using namespace std;

int max_diff(int arr[],int n)
{
    int res = arr[1] - arr[0];
    int minval = arr[0];

    for (int i = 1; i<n;i++){
        res = max(res,arr[i] - minval);
        minval = min(minval,arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {2,3,10,6,4,8,1};
    cout << max_diff(arr,7);
    return 0;
}
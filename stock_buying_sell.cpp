#include <iostream>
using namespace std;

int stock_buy(int arr[],int n)
{
    int res = 0;
    for (int i=1; i < n;i++){
        if (arr[i] > arr[i-1])
            res += arr[i] - arr[i-1];
    }
    return res;
}

int main()
{
    int arr[] = {1,5,3,8,12};
    cout << stock_buy(arr,5);
    return 0;
}
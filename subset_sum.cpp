#include <iostream>
using namespace std;

int countset(int arr[],int n , int sum)
{
    if (n==0)
        return (sum == 0) ? 1 : 0;
    return countset(arr,n-1,sum) + countset(arr,n-1,sum-arr[n-1]);
}

int main()
{
    int arr[] = {10,15,20};
    int sum = 25;
    cout << countset(arr,3,25);
    return 0;
}
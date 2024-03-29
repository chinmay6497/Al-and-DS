#include <iostream>
using namespace std;

int bsrch(int arr[], int low, int high, int x)
{
    
    if (low > high)
        return -1;
    
    int mid = (low + high)/2;
    
    if (arr[mid] == x)
        return mid;

    else if (arr[mid] < x)
        return bsrch(arr,mid+1,high,x);
    
    else
        return bsrch(arr,low,mid-1,x);
}

int main()
{
    int arr[] = {10,20,30,40,50,60};
    cout << bsrch(arr,0,5,50);
    return 0;
}
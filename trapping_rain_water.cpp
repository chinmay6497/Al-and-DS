#include <iostream>
using namespace std;

int trapping_rain_water(int arr[],int n)
{
    int left[n];
    int right[n];
    
    left[0] = arr[0];
    for(int i=1;i < n;i++){
        left[i] = max(left[i-1],arr[i]);
    }

    right[n-1] = arr[n-1];
    for (int i = n-2; i >=0; i--){
        right[i] = max(arr[i],right[i+1]);
    }
    int res = 0;
    for (int i=1; i<n;i++){
        res += min(left[i],right[i]) - arr[i];
    }
    return res;
}

int main()
{
    int arr[] = {5,0,6,2,3};
    cout << trapping_rain_water(arr,5);
    return 0;
}
#include <iostream>
using namespace std;

int peak_ele(int arr[], int n)
{
    int low = 0, high = n-1;

    while(low <=high){
        int mid = (low + high)/2;

        if ((mid == 0 || arr[mid] >= arr[mid- 1])  && (mid == n-1 || arr[mid] >= arr[mid + 1]))
            return arr[mid];
        
        else if (mid > 0 && arr[mid - 1] >= arr[mid])
            high = mid - 1;
        
        else
            low = mid + 1;
    }
    return 0;
}

int main()
{
    int arr[] = {5,20,40,30,10,50,60};
    cout << peak_ele(arr,7);
    return 0;
}

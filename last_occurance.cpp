#include <iostream>
using namespace std;

int last_occurance(int arr[], int n, int x)
{
    int low = 0;
    int high = n-1;

    while (low <= high){
        int mid = (low + high)/2;

        if (arr[mid] > x)
            high = mid - 1;
        
        else if (arr[mid] < x)
            low = mid + 1;

        else
            if (mid == n-1 || arr[mid] != arr[mid + 1])
                return mid;
            
            else
                low = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {5,10,10,10,10,20,20};
    cout << last_occurance(arr,7,10);
    return 0;
}
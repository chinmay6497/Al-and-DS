#include <iostream>
using namespace std;

int search_rotated(int arr[], int n, int x)
{   
    int low = 0;
    int high = n-1;

    while( low <= high){
        int mid = (low + high)/2;

        if (arr[mid] == x)
            return mid;
        
        else if (arr[mid] > arr[low]){
            if (x >= arr[low] && x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        else{
            if (x >=arr[mid + 1] && x < arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10,20,40,60,5,8};
    cout << search_rotated(arr,6,5);
    return 0;
}
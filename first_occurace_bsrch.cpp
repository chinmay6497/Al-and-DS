#include <iostream>
using namespace std;

int first_occ_bsrch(int arr[],int n, int x)
{   
    int low = 0;
    int high = n-1;

    while (low <= high){
        int mid = (low + high)/2;

        if (arr[mid] < x)
            low = mid + 1;
        
        else if (arr[mid] > x)
            high = mid - 1;

        else 
            if (mid == 0 || arr[mid] != arr[mid - 1])
                return mid;
            
            else
                high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {10,20,20,20,30,30};
    cout << first_occ_bsrch(arr,6,30);
    return 0;
}
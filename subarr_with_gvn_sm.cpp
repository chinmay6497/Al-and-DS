#include <iostream>
using namespace std;

bool subarray(int arr[],int n,int sm)
{
    int curr = arr[0];
    int s = 0;

    for (int i = 1; i<n; i++){
        
        while (curr > sm && s < i){
            curr -= arr[s];
            s++;
        }

        if (curr == sm)
            return true;
        
        if (i < n){
            curr += arr[i];
        } 
    }
    return (curr == sm);
}

int main()
{
    int arr[] = {1,4,20,3,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sm = 32;
    cout << subarray(arr,n,sm);
    return 0;
}
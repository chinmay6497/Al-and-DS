#include <iostream>
using namespace std;

void leader(int arr[], int n)
{
    int curr = arr[n-1];
    cout << curr << " ";
    for (int i= n-2; i >=0; i--){
        if (curr < arr[i]){
            curr = arr[i];
            cout << curr << " ";
        }
    }
}

int main()
{
    int arr[] = {7,10,4,10,6,5,2};
    leader(arr,7);
    return 0;
}
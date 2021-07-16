#include <iostream>
using namespace std;

void reverse(int arr[],int low, int high)
{
    while (low < high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low ++;
        high --;
    }
}

void rotate(int arr[],int n, int d) 
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    rotate(arr,5,2);
    for (int i=0; i< 5; i++)
        cout << arr[i] << " ";
    return 0;
}
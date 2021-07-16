#include <iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int low = 0;
    int high = n-1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low ++;
        high --;
    }
}

int main()
{
    int arr[] = {5,4,3,2,1};
    reverse(arr,5);
    for (int i=0;i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
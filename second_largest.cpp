#include <iostream>
using namespace std;

int second_largest(int arr[],int n)
{
    int res = -1;
    int largest = 0;
    for (int i = 0;i < n ;i++){
        if (arr[i] > arr[largest]){
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest]){
            if (res == -1 || arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}

int main()
{
    int arr[]= {5,20,7,20,10};
    cout << second_largest(arr,5);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n )
{
    for (int i = 0; i< n-1; i++){
        for (int j=0; j< n-i-1; j++){
            if (arr[j] > arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

int main()
{
    int arr[] = {40,20,10,5,3};
    bubble_sort(arr,5);
    for (int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
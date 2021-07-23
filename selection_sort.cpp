#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{   int min_idx;
    for(int i=0; i<n;i++){
        min_idx = i;
        for(int j = i+1; j<n;j++){
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
    swap(arr[min_idx],arr[i]);
    }
}

int main()
{
    int arr[] = {40,20,10,5,3};
    selection_sort(arr,5);
    for (int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h)
{
    int pivot = arr[h];
    int i = l-1;

    for (int j=l; j<=h-1; j++){
        if (arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

int quick_srt(int arr[],int l,int h)
{
    if (l > h)
        return 0;
    else{
        int p = partition(arr,l,h);
        quick_srt(arr,l,p-1);
        quick_srt(arr,p+1,h);
    }
    return -1;
}

int main()
{
    int arr[] = {8,4,7,9,3,10,5};
    quick_srt(arr,0,6);
    for (int i=0; i<7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
#include <iostream>
using namespace std;

void merge(int arr[],int low,int high,int mid)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int lft[n1];
    int rgt[n2];

    for (int i =0; i<n1; i++){
        lft[i] = arr[low + i];
    }

    for(int j=0; j<n2; j++){
        rgt[j] = arr[n1+j];
    }

    int i=0,j=0,k=0;

    while (i< n1 && j < n2){
        if (lft[i] <= rgt[j]){
            arr[k] = lft[i];
            k++;
            i++;
        }
        else{
            arr[k] = rgt[j];
            j++;
            k++;
        }
    }

    while (i < n1){
        arr[k] = lft[i];
        k++;
        i++;
    }

    while (j < n2){
        arr[k] = rgt[j];
        k++;
        j++;
    }
}

int main()
{
    int arr[] = {10,20,40,20,30};
    merge(arr,0,4,2);

    for (int i=0; i< 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
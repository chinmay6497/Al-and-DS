#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h)
{
    int pivot = arr[h];
    int i = l-1;

    for (int j=l; j<=h-1; j++){
        if (arr[j] < pivot);{
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

 
int main() {
	
    int arr[]={8,4,7,9,3,10,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout << partition(arr,0,n-1);
    return 0;
}
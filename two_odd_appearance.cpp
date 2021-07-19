#include <iostream>
using namespace std;

void count_set_bit(int arr[],int n)
{
    int res1 = 0;
    int res2 = 0;
    int xors = 0;
    for (int i=0; i<n; i++){
        xors = xors ^ arr[i];
    }

    int sm = xors & (~(xors-1));
    for (int i=0;i<n;i++){
        if (arr[i] & sm !=0)
            res1 = res1^ arr[i] ;
        else
            res2 = res2 ^ arr[i] ;
    }
    cout << res1 <<" " << res2;
}

int main()
{
    int arr[] = {3, 4, 3, 4, 5, 4, 4, 6, 7, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    count_set_bit(arr,n);
    return 0;
}
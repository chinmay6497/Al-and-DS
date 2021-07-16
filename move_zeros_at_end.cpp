#include <bits/stdc++.h>
using namespace std;

void move_zeros(int arr[],int n)
{
    int res = 0;
    for (int i=0;i < n; i++){
        if (arr[i] !=0){
            swap(arr[i],arr[res]);
            res ++;
        }
    }
}

int main()
{
    int arr[] = {1,4,0,0,4,0,3};
    move_zeros(arr,7);
    for (int i=0; i < 7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
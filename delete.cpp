#include <iostream>
using namespace std;

int del(int arr[],int n,int x)
{
    int i;
    for (i=0;i < n; i++){
        if (arr[i] == x)
            break;
    }
    if (i == n)
        return n;
    
    for (int j=i; j <n;j++){
        arr[j] = arr[j+1];
    }
    return n-1;
}

int main()
{
    int arr[] = {3,8,12,5,6};
    int n = 5;
    int x = 12;
    cout << del(arr,n,x);
    return 0;
}
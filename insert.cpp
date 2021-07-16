#include <iostream>
using namespace std;

int insert(int arr[],int cap,int n,int x, int pos)
{
    if (n == cap)
        return n;
    
    int idx = pos-1;
    for (int i = n-1; i >= idx; i--){
        arr[i+1] = arr[i];
    }
    arr[idx] = x;
    return (n+1);
}

int main()
{
    int arr[] = {5,3,7,10,20};
    int cap = 4;
    int n = 5;
    int x = 32;
    int pos = 4;
    cout << insert(arr,cap,n,x,pos);
    return 0;
}
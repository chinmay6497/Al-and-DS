#include <iostream>
using namespace std;

int max_cons(int arr[],int n)
{
    int count = 0;
    int i = 0;
    int res = 0;
    while (i < n){
        while (i < n && arr[i] == 1){
            count ++;
            i++;
        }
        res = max(res,count);
        i++;
        count = 0;
    }
    return res;
}   

int main()
{
    int arr[] = {1,0,1,1,1,1,0,1,1};
    cout << max_cons(arr,9);
    return 0;
}
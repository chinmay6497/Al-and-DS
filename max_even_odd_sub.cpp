#include <iostream>
using namespace std;

int max_even_odd(int arr[],int n)
{
    int count = 1;
    int i = 1;
    int res = 1;

    while (i < n){
        if ((arr[i-1]%2 == 0 && arr[i]%2 !=0) || (arr[i-1]%2 !=0 && arr[i]%2 ==0)){
            count++;
            i++;
            res = max(res,count);
        }
        else
        count = 1;
        i++;
    }
    return res;
}

int main()
{
    int arr[] = {10,12,14,7,8};
    cout << max_even_odd(arr,5);
    return 0;
}
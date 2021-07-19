#include <iostream>
using namespace std;

int findsingle(int arr[],int arr_size)
{
    int res = arr[0];
    for (int i = 0; i < arr_size;i++)
    {res = res ^ arr[i];}
    return res;
};

int main()
{
    int arr[] = {2,3,5,4,5,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << findsingle(arr,n);
    return 0;
}
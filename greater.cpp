#include <iostream>
using namespace std;

// int getlargest(int arr[], int n)
// {
//     for (int i = 0;i <n;i++){
//         bool flag = true;
//         for (int j=0; j<n;j++){
//             if (arr[j] > arr[i]){
//                 flag = false;
//                 break;
//             }
//         }
//         if (flag == true)
//             return i;
//     }
//     return -1;
// }

int getlargest(int arr[],int n)
{
    int res = 0;
    for (int i= 1;i < n ; i++){
        if (arr[i] > arr[res])
            res = i;
    }
    return res;
}

int main()
{
    int arr[] = {5,8,20,10};
    int n = 4;
    cout << getlargest(arr,n);
    return 0;
}
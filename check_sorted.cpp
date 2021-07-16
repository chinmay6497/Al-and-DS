#include <iostream>
using namespace std;

bool check_sorted(int arr[],int n)
{
    bool flag = true;
    int res = 0;
    for (int i=1;i < n;i++){
        if (arr[i] > arr[res])
            res = i;
        else{
            flag = false;
            break;
        }
            
    }
    return flag;
}

int main()
{
    int arr[] = {2,5,9,2};
    cout << check_sorted(arr,4);
    return 0;
}
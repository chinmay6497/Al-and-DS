#include <iostream>
using namespace std;

int max_sub_array(int arr[], int n)
{
    int res = arr[0];
    int curr_sm = arr[0];

    for (int i = 1; i <n; i++){
        curr_sm = max(curr_sm+arr[i],arr[i]);
        res = max(res,curr_sm);
    }
    return res;
}

int circular_sub(int arr[], int n)
{
    int norm_sum = max_sub_array(arr,n);
    if (norm_sum < 0)
        return norm_sum;

    int sm = 0;

    for (int i=0; i< n;i++){
        sm += arr[i];
        arr[i] = -arr[i];
    }
    int cir_sum = sm + max_sub_array(arr,n); 
    return max(cir_sum,norm_sum);
}

int main()
{
    int arr[] = {8,-4,3,-5,4};
    cout << circular_sub(arr,5);
    return 0;
}
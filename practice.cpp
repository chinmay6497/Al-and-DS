#include <iostream>
using namespace std;

void count_sort(int arr[], int n, int exp)
{
    int count[10], output[n];

    for (int i=0; i<10; i++){
        count[i] = 0;
    }

    for (int i=0; i< 10; i++){
        count[(arr[i]/exp)%10]++;
    }

    for (int i=1; i<10; i++){
        count[i] = count[i] + count[i-1];
    }

    for (int i = n-1; i>=0; i--){
        output[count[(arr[i]/exp) % 10] - 1] = arr[i];
        output[count[(arr[i]/exp) % 10]] --;
    }

    for (int i = 0; i<n; i++){
        arr[i] = output[i];
    }
}

void radix_sort(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 0; i<n; i++){
        if (arr[i] > mx)
            mx = arr[i];
    }


    for (int exp=1; mx/exp >0; exp = exp*10)
        count_sort(arr,n,exp);
}

int main()
{
    int arr[] = {319,212,6,8,100,50};
    radix_sort(arr,6);

    for (int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
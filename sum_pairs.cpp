#include <iostream>
using namespace std;

int main()
{
    int arr[] ={1,3,2,6,1,2};
    int n = 6;
    int k = 3;
    int count = 0;

    for (int i=0; i<n;i++){
        for (int j=i+1; j<n; j++){
            if ((arr[i] + arr[j]) % k == 0)
                // count++;
                cout << arr[i] << " "<< arr[j] << endl;
        }
    }
    // cout << count;
}
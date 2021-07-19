#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> arr;
    arr = {256741038, 623958417, 467905213, 714532089, 938071625};

    sort(arr.begin(),arr.end());

    int arr_min = 0;
    long long int arr_max = 0;
    
    // for (int i=0; i<4; i++)
    //     arr_min += arr[i];
        
    for (int i= arr.size()-1; i>=1;i--){
        arr_max += arr[i];
        cout << arr_max << " ";
    }
        
    // cout << arr_min << " " << arr_max;
}
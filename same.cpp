#include <bits/stdc++.h>
using namespace std;

string same(int *arr1, int *arr2)
{
    int n = 5;
    for (int i=0; i<n;i++){
        if (arr1[i] == arr2[i])
            return "Yes";
        
    }
    return "No";
}
int main()
{
    int arr1[] = {1,3,4,10,15};
    int arr2[] = {0,2,4,11,15};

    // int n = 5;

    // for (int i=0; i<n;i++){

    // }
    cout << same(arr1,arr2);
    return 0;
}
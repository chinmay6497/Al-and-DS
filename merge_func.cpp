#include <iostream>
using namespace std;

void merge(int arr1[],int arr2[],int n,int m)
{
    int i=0,j=0;
    while(i < n && j < m){
        if (arr1[i] <= arr2[j]){
            cout << arr1[i] << " ";
            i++;
        }
        else{
            cout << arr2[j] << " ";
            j ++;
        }
            
    }
    while (i < n){
        cout << arr1[i] << " ";
        i++;
    }
    while (j < m){
        cout << arr2[j] << " ";
        j++;
    }
}

int main()
{
    int arr1[] = {10,20,50};
    int arr2[] = {5,50,50};
    int n = 3, m =3;
    merge(arr1,arr2,n,m);
    // for (int i = 0; i<3; i++){
    //     cout << 
    // }
    return 0;
}
#include <iostream>
using namespace std;

int gvn_sum(int arr[], int n, int x)
{
    int lft = 0;
    int rgt = n-1;

    while (lft <= rgt){
        if (arr[lft] + arr[rgt] == x)
            return 1;

        else if (arr[lft] + arr[rgt] < x)
            lft ++;
        
        else
            rgt --;
    }
    return -1;
}   

int main()
{
    int arr[] = {2,5,8,12,30};
    cout << gvn_sum(arr,5,17);
    return 0;
}
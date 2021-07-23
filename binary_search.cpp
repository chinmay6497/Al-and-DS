#include <iostream>
using namespace std;

int square_root(int n)
{
    int low = 0 , high = n;
    int ans = -1;   

    while (low <= high){
        int mid = (low + high)/2;

        if (mid * mid == n)
            return mid;
        
        else if (mid * mid > n)
            high = mid - 1;

        else{
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    cout << square_root(10);
    return 0;
}
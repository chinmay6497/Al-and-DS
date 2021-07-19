#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][10] = {{1,2,3},
                    {4,5,6},        
                    {7,8,9}};

    int d1 = 0;
    int d2 = 0;

    for (int i=0; i<3; i++){
        for (int j=0; j<10; j++){
            // if (i == j)
            //     d1 += arr[i][j];
            cout << arr[i][j]<< " ";
        }
        cout << endl;

    }

    // cout << d1 << endl;
}
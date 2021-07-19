#include <bits/stdc++.h>
using namespace std;

void kangaroo(int x1, int v1, int x2, int v2) {
    long long int k1[100000] = {0};
    long long int k2[100000] = {0};
    long long int n = 100000;
    
    for (int i=0; i<n;i++){
        k1[i] = x1+(v1*i);
    }
    
    for (int j=0; j<n;j+=v2){
        k2[j] = x2+(v2*j);
    }
    
    // for (int i=0; i<n;i++){
    //     if (k1[i] == k2[i])
    //         return "YES";
    // }
    // return "NO";

    for (int i=0; i<100; i++){
        cout << k1[i] << " ";
    }
    cout << endl;
    
    for (int j=0; j<100;j++){
        cout <<k2[j] <<" ";
    }

}

int main()
{
    // cout << kangaroo(4523,8092,9419,8076);
    kangaroo(4523,8092,9419,8076);
}
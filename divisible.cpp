#include <bits/stdc++.h>
using namespace std;

bool isdivisibe(vector <int> c,int n){
    // bool flag = true;
    for (int i=0; i< c.size(); i++){
        if ( n%c[i] != 0 || c[i] % n !=0){
            return false;
        }
    }
    return true;
}

int main()
{
    vector <int> a = {2,4};
    vector <int> b = {16,32,96};

    cout << isdivisibe(b,4);
    // cout << 4 % 16;
}
#include <bits/stdc++.h>
using namespace std;

bool isdivisibe(vector <int> c,int n){
    // bool flag = true;
    for (int i=0; i< c.size(); i++){
        if ( n%c[i] != 0){
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> a = {2,4};
    vector<int> b = {16,32,96};
    int res1 = INT_MIN;
    int res2 = INT_MAX;
    int count = 0;
    
    for (int i=0; i< a.size(); i++){
        res1 = max(res1,a[i]);
    }
    
    for (int i=0; i< b.size(); i++){
        res2 = min(res2,b[i]);
    }
    
    for (int i= res1; i<= res2; i++){
        if (isdivisibe(a, i) && isdivisibe(b,i))
            count++;
            // cout << i << " ";
    }
    cout << count;
    
}
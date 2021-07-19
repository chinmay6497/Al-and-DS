#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> s = {1,2,1,3,2};
    int m = 3;
    int d = 2;
    int count = 0;
    int n = s.size();
    int res = 0;

    for (int i=0; i<d;i++){
        res+=s[i];
    }

    if (res == m)
        count++;
    
    for (int i=d; i< n; i++){
        res+= s[i] - s[i-d];
        if (res == m)
            count++;
    }
    cout << count;
}
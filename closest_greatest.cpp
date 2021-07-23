#include <bits/stdc++.h>
using namespace std;

void closest_greater (vector<int> arr)
{
    int n = arr.size();
    stack <int> s;
    cout << -1 << " ";
    s.push (0);

    for (int i=1; i<n; i++){
        while (s.empty() == false && arr[s.top()] <= arr[i])
            s.pop ();
        
        int span = s.empty() ? -1: arr[s.top()];
        cout << span << " ";
        s.push(i);
    }
}

int main()
{
    vector<int> s = {20,30,10,5,15};
    closest_greater(s);
    return 0;
}
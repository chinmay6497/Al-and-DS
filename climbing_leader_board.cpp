#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {100,90,90,80,75,60};
    vector<int> temp;
    // int temp[5] ={0};

    int n = a.size();
    for (int i=0; i<n;i++){
        if (a[i] == a[i-1])
            continue;
        
        else
            temp.push_back(a[i]);
            // temp[i] = a[i];
    }

    sort(temp.begin(),temp.end());
    vector<int>soln;
    vector<int> b = {50,65,77,90,102};
    int i=0;
    for (int j=0; j<b.size();){
        if (b[j] < a[j])
            soln.push_back(b[j])
            
        else
            soln.push_back(a)
    }
}
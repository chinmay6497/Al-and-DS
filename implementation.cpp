#include <bits/stdc++.h>
using namespace std;

void add_ele(vector<int> adj[],int n ,int m)
{
    adj[n].push_back(m);
    adj[m].push_back(n);
}

void print(vector<int> adj[], int v)
{
    for (int i=0; i< v ;i++){
        for (auto x : adj[i])
            cout << x << " ";
        cout << "\n";
    }
}

int main()
{
    int v = 4;
    vector <int> adj[v];
    add_ele(adj,0,1);
    add_ele(adj,0,2);
    add_ele(adj,1,2);
    add_ele(adj,1,3);
    print(adj,v);
    return 0;
}
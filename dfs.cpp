#include <bits/stdc++.h>
using namespace std;

void add_ele(vector <int> adj[],int v, int s){
    adj[v].push_back(s);
    adj[s].push_back(v);
}

void dfs_rec(vector<int> adj[],int s, bool visited[]){
    visited[s] = true;
    cout << s << " ";

    for (int u: adj[s]){
        if (visited[u] == false)
            dfs_rec(adj,u,visited);
    }
}

void dfs(vector<int> adj[], int v, int s){
    bool visited[v];
    for (int i=0; i< v; i++){
        visited[i] = false;
    }
    dfs_rec(adj,s,visited);
}

int main()
{
    int v = 5;
    vector <int> adj[v+1];
    add_ele(adj,0,1);
    add_ele(adj,0,2);
    add_ele(adj,2,3);
    add_ele(adj,3,1);
    add_ele(adj,3,4);
    add_ele(adj,1,4);

    dfs(adj,v,0);
}
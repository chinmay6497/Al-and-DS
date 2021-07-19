#include <bits/stdc++.h>
using namespace std;

void add_ele(vector<int> adj[],int v ,int s){
    adj[v].push_back(s);
}

void dfs(vector<int> adj[],int u, stack<int> &s, bool visited[]){
    visited[u] = true;

    for (int x: adj[u]){
        if (visited[x] == false)
            dfs(adj,x,s,visited);
    }
    s.push(u);
}

void topological_sort(vector<int> adj[],int v){
    bool visited[v];

    for (int i=0; i< v; i++)
        visited[i] = false;
    
    stack<int> s;

    for (int u = 0; u< v; u++){
        if (visited[u] == false)
            dfs(adj,u,s,visited);
    }

    while (!s.empty()){
        int u = s.top();
        s.pop();
        cout << u << " ";
    }
}

int main()
{
    int v = 5;
    vector<int> adj[v];
    add_ele(adj,0,1);
    add_ele(adj,1,3);
    add_ele(adj,3,4);
    add_ele(adj,2,3);
    add_ele(adj,2,4);

    topological_sort(adj,v);
}
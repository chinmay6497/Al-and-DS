#include <bits/stdc++.h>
using namespace std;

void add_ele(vector<int> adj[],int v, int s){
    adj[v].push_back(s);
    adj[s].push_back(v);
}

void bfs(vector<int> adj[],int v, int s){
    bool visited[v+1];
    for (int i=0; i< v; i++)
        visited[i] = false;
    
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (q.empty() == false){
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : adj[u]){
            if (visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int main()
{
    int v = 5;
    vector<int> adj[v+1];
    add_ele(adj,0,1);
    add_ele(adj,0,2);
    add_ele(adj,1,2);
    add_ele(adj,1,3);
    // print(adj,v);
    bfs(adj,v,0);
    
    return 0;
}
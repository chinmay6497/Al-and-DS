#include <bits/stdc++.h>
using namespace std;

void add_ele(vector<int> adj[], int v , int s){
    adj[v].push_back(s);
    adj[s].push_back(v);
}

void bfs(vector<int> adj[], int v, bool visited[]){
    queue<int> q;
    visited[v] = true;
    q.push(v);

    while (q.empty() == false){
        int  u = q.front();
        q.pop();
        cout  << u << " ";
        for (int v : adj[u]){
            if (visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void bfs_dis(vector<int> adj[],int v){
    bool visited[v+1];
    for (int i=0; i< v;i++)
        visited[i] = false;
    
    for (int i=0; i< v; i++){
        if (visited[i] == false)
            bfs(adj,i,visited);
    }
}

int main()
{
    int v = 7;
    vector<int> adj[v];
    add_ele(adj,0,1);
    add_ele(adj,0,2);
    add_ele(adj,1,3);
    add_ele(adj,2,3);
    add_ele(adj,4,5);
    add_ele(adj,4,6);
    add_ele(adj,5,6);

    bfs_dis(adj,v);
}
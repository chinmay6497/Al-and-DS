#include <bits/stdc++.h>
using namespace std;

void add_ele(vector<int> adj[],int v , int s){
    adj[v].push_back(s);
    adj[s].push_back(v);
}

void bfs(vector<int> adj[],int v, int s, int dist[]){
    bool visited[v];
    for (int i=0; i< v; i++)
        visited[i] = false;
    
    visited[s] = true;
    queue<int> q;
    q.push(s);

    while (q.empty() == false){
        int u = q.front();
        q.pop();

        for (int v: adj[u]){
            if (visited[v] == false){
                dist[v] = dist[u] + 1;
                visited[v] = true;
                q.push(v);
            }
        }
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
    add_ele(adj,2,3);
    
    int dist[v];
    dist[0] = 0;

    for (int i=1; i< v;i++){
        dist[i] = INT_MAX;
    }

    bfs(adj,v,0,dist);

    for (int i=0; i< v; i++)
        cout << dist[i] << " ";

}
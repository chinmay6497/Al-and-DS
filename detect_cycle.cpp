#include <bits/stdc++.h>
using namespace std;

void add_ele(vector<int> adj[], int s , int v){
    adj[s].push_back(v);
    adj[v].push_back(s);
}

bool dfs_Rec(vector<int> adj[],int s, bool visited[], int parent){
    visited[s] = true;

    for (auto u: adj[s]){
        if (visited[u] == false){
            if (dfs_Rec(adj,u,visited,s) == true)
                return true;
            
            else if (u != parent)
                return true;
        }
    }
    return false;
}

bool dfs_cycle(vector<int> adj[],int v){
    bool visited[v];

    for (int i=0; i< v; i++)
        visited[i] = false;
    
    for (int i=0; i< v; i++){
        if (visited[i] == false){
            if (dfs_Rec(adj,i,visited,-1) == true)
                return true;
        }
    }
    return false;
}
int main()
{
    int v = 4;
    vector<int> adj[v];
    add_ele(adj,0,1);
    add_ele(adj,1,2);
    add_ele(adj,1,3);
    add_ele(adj,2,3);

    if (dfs_cycle(adj,v))
        cout << "Cycle found";
    
    else
        cout << " No Cycle found";
}
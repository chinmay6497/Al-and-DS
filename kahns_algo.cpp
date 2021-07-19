#include <bits/stdc++.h>
using namespace std;

void add_ele(vector<int> adj[],int v ,int s){
    adj[v].push_back(s);
    // adj[s].push_back(v);
}

void topological_sort(vector<int> adj[],int v){
    vector<int> indegree(v,0);

    for (int i=0; i< v; i++){
        for (auto x : adj[i])
            indegree[x]++;
    }

    queue<int> q;

    for (int i=0; i< indegree.size();i++){
        if (indegree[i] == 0)
            q.push(i);
    }

    while (q.empty() == false){
        int u = q.front();
        q.pop();
        cout << u << " ";

        for (int x : adj[u]){
            if (-- indegree[x] == 0)
                q.push(x);
        }
    }



}
int main()
{
    int v = 5;
    vector<int> adj[v];

    add_ele(adj,0,1);
    add_ele(adj,0,2);
    add_ele(adj,1,2);
    add_ele(adj,3,2);
    add_ele(adj,3,4);

    topological_sort(adj,v);
}
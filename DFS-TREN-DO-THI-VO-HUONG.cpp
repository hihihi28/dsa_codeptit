#include <bits/stdc++.h>
using namespace std;
int visited[1001];
vector<int> adj[1001];
int n,m,x;
void inp(){
    
    cin >> n >> m >> x ;
    while(m--){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(visited, 0, sizeof(visited));
}
void dfs(int u){
    visited[u] = 1;
    cout << u << " ";
    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        inp();
        dfs(x);
        cout << endl;
        for(int i = 1; i <= n; i++) {
            adj[i].clear(); 
        }
    }
}
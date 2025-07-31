#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1000005];
int d[1000005], visited[1000005];
void dfs(int u){
    visited[u] = 1;
    for(int v : adj[u]){
        if(!visited[v]){
            d[v] = d[u] + 1;
            dfs(v);
        }
    }
}
int main(){
    int t; cin >>t;
    while(t--){
        memset(visited, 0, sizeof(visited));
        memset(d, 0, sizeof(d));
        int n; cin >>n;
        for(int i=1; i<n; i++){
            int x,y;
            cin >>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(1);
        cout << *max_element(d + 1, d + n + 1) <<endl;
        for(int i=1; i<=n; i++) adj[i].clear();
    }
}
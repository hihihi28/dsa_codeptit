#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
int visited[1005], parent[1005];
void dfs(int u){
    visited[u] = 1;
    for(int v:adj[u]){
        if(!visited[v]){
            parent[v] = u;
            dfs(v);
        }
    }
}
void findPath(int s, int t){
    vector<int>p;
   
    while (t!=s)
    {
        
        p.push_back(t);
        t = parent[t];
    }
    p.push_back(s);
    reverse(p.begin(), p.end());
    cout << p.size() - 1 << endl;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        for(int i=1; i<n; i++){
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int q; cin >>q;
        while (q--)
        {
            memset(visited, 0, sizeof(visited));
            memset(parent, 0, sizeof(parent));
            int s,t;
            cin >>s >>t;
            dfs(s);
            findPath(s,t);
        }
        for(int i=1;i<=n;i++) adj[i].clear();
    }
    
}
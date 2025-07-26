#include <bits/stdc++.h>
using namespace std;
int visited[1001];
vector<int> adj[1001];
int n,m,x;
int cnt;
void inp(){
    
    cin >> n >> m ;
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
    //cout << u << " ";
    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}
int dem(){
    cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            cnt++;
            dfs(i);
        }
    }
    return cnt;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        inp();
        cout << dem();
        cout << endl;
        for(int i = 1; i <= n; i++) {
            adj[i].clear(); 
        }
    }
}
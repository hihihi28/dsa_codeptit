#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
int n,m,s,t, visited[1005], parent[1005];
vector<int>path;
void dfs(int u){
  visited[u]=1;
 
  for(int v:adj[u]){
    if(!visited[v]){
      parent[v]=u;
      dfs(v);
    }
  }
  
}
void solve(){
  path.clear();
  memset(visited,0,sizeof(visited));
  cin >> n >>m >>s>>t;
  for(int i=1;i<=m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
  }
  dfs(s);
  if(!visited[t]){
    cout<<-1<<endl;
  }
  else{
    while(t!=s){
      path.push_back(t);
      t=parent[t];
    }
    path.push_back(s);
    reverse(path.begin(), path.end());
    for(int x:path) cout<<x<<" ";
    cout<<endl;
  }
}
int main() 
{
    int t;
    cin>>t;
    solve();
}
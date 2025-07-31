#include<bits/stdc++.h>
using namespace std;

int n, visited[1001], pre[1001];
vector<int> adj[1001];
vector<int> la;
void bfs(int u){
    visited[u] = true;
    queue<int> q;
    q.push(u);
    while (q.size())
    {
        int v = q.front();
        q.pop();
        for(int x: adj[v]){
            if(!visited[x]){
                visited[x] = 1;
                pre[x] = v;
                q.push(x);
            }
        }
    }
    
}
void findPath(int u, int v){
    vector<int> p;
    while(v != u){
        
        p.push_back(v);
        v = pre[v];
    }
    p.push_back(u);
    reverse(p.begin(), p.end());
    for(int x : p){
        cout << x << ' ';
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
       memset(visited,0,sizeof(visited));
        cin >> n;
        for(int i=1; i<n; i++){
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            
        }
        la.clear();
        for(int i=2; i<=n; i++){
            if(adj[i].size() == 1){
                la.push_back(i);
            }
        }
        bfs(1);
        for(int i: la) findPath(1, i);
        for(int i=1; i<=n; i++ ) adj[i].clear();

        
    }
    
}
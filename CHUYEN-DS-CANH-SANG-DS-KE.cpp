#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        while(m--){
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            //adj[v].push_back(u);
        }
        for(int i=1;i<=n;i++){
            cout<<i<<": ";
            for(int x:adj[i]){
                cout<<x<<" ";
            }
            cout<<"\n";
        }
        cout<<endl;
        for(int i=1;i<=n;i++) adj[i].clear(); // Clear adjacency list for next test case
    }
}
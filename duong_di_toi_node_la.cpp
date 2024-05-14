#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>adj[100005];
int d[100005];
int used[100005];
int pre[100005];
void dfs(int u){
	used[u]=1;
	for(auto x:adj[u]){
		if(used[x]==0){
			pre[x]=u;
			dfs(x);
		}
	}
}
void path(int u,int v){
	vector<int>path;
	while(v!=u){
		path.push_back(v);
		v=pre[v];
	}
	path.push_back(1);
	reverse(path.begin(),path.end());
	for(auto x:path){
		cout<<x<<" ";
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			adj[i].clear();
		}
		memset(d,0,sizeof(d));
		memset(used,0,sizeof(used));
		memset(pre,0,sizeof(pre));
		for(int i=0;i<n-1;i++){
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		dfs(1);
		for(int i=2;i<=n;i++){
			if(adj[i].size()==1){
				path(1,i);
				cout<<endl;
			}
		}
	}
}


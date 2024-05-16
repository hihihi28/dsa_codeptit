#include <bits/stdc++.h>
using namespace std;
int ok;
vector<int>a[1005];
bitset<1005> visited;
int res;
void dem(int u,int v,int cnt=0){
	if(ok) return;
	visited[u]=1;
	if(u==v){
		ok=1;
		res=cnt;
		return;
	}
	for(auto &i:a[u]){
		if(!visited[i])
		dem(i,v,cnt+1);
	}
}
int main() {
    int t;cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	for(int i=1;i<n;i++){
    		int u,v;
    		cin>>u>>v;
    		a[u].push_back(v);
    		a[v].push_back(u);
		}
		int q;cin>>q;
		while(q--){
			int x,y;
			cin>>x>>y;
			res=0;
			ok=0;
			dem(x,y);
			cout  <<res<<endl;
			visited.reset();
		}
		for(int i=1;i<=n;i++) a[i].clear();
	}
}

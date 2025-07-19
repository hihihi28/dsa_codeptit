#include<bits/stdc++.h>
using namespace std;
int c[1005][1005];
int a[1005][1005];
int n,m;
void init(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			c[i][j]=-1;
		}
	}
}
int bfs(int x, int y){
	queue<pair<int,int>>q;
	c[0][0]=0;
	q.push({x,y});
	while(!q.empty()){
		pair<int,int> tmp=q.front();
		q.pop();
		int i=tmp.first, j=tmp.second;
		if(i>=0 && i<n && j+a[i][j]>=0 && j+a[i][j]<m&& c[i][j+a[i][j]]==-1){
			q.push({i,j+a[i][j]});
			c[i][j+a[i][j]] = c[i][j] + 1;

		}
		if(i+a[i]>=0 && i+a[i][j]<n && j>=0 && j<m && c[i+a[i][j]][j]==-1){
			q.push({i+a[i][j],j});
			 c[i+a[i][j]][j] =  c[i][j] + 1;
		}
		if(c[n-1][m-1]!=-1) break;
	}
	return c[n-1][m-1];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		
		cin >>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		init();
		cout<<bfs(0,0)<<endl;
		
	}
}

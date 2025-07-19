#include<bits/stdc++.h>
using namespace std;
int n,m,  visited[1005][1005];
char a[1005][1005];
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
int cnt;
void bfs(int x, int y){

	queue<pair<int,int>>q;
	q.push({x,y});
	visited[x][y]=1;
	while(!q.empty()){
		pair<int,int> tmp=q.front();
		int u=tmp.first, v=tmp.second;
		q.pop();
		for(int i=0;i<4;i++){
			int nx=u+dx[i];
			int ny=v+dy[i];
			if(nx>=0 && nx<n && ny>=0 && ny<m && !visited[nx][ny] && a[nx][ny]=='#'){
				visited[nx][ny]=1;
				q.push({nx,ny});
			}
		}
	}
}
int main(){
	cin >>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			visited[i][j]=0;
		}
	}
	cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='#' &&!visited[i][j]){
				bfs(i,j);
				cnt++;
			}
		}
	}
	cout<<cnt;
}

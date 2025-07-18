#include<bits/stdc++.h>
using namespace std;
int n,used[100],k;
int a[100];
int cnt=0;
vector<int> b,c;
bool check(){
	if(b==c) {
		return true;
	}
	return false;
}
void Try(int i){
	
	for(int j=a[i-1]+1;j<=n-k+i;j++){
	
		a[i]=j;
		if(i==k){
			cnt++;
			b.clear();
			for(int l=1;l<=k;l++){
				b.push_back(a[l]);
			}
			if(check()) cout<<cnt<<endl;
		}
		else {Try(i+1);}
		
		
		
	}
	
}
int main(){
	int t;cin>>t;
	while(t--){
		cnt=0;
		cin>>n>>k;	
		b.clear();
		c.clear();
		for(int i=1;i<=k;i++) 
		{
			int x;cin>>x;
			c.push_back(x);
		}
	

		Try(1);
	}
}

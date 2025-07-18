#include<bits/stdc++.h>
using namespace std;
int n,used[100];
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
	
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				cnt++;
				b.clear();
				for(int k=1;k<=n;k++){
					b.push_back(a[k]);
				}
				if(check()) cout<<cnt<<endl;
			}
			else {Try(i+1);}
			used[j]=0;
		}
		
	}
	
}
int main(){
	int t;cin>>t;
	while(t--){
		cnt=0;
		cin>>n;	
		b.clear();
		c.clear();
		for(int i=1;i<=n;i++) 
		{
			int x;cin>>x;
			c.push_back(x);
		}
	

		Try(1);
	}
}

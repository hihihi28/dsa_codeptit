#include<bits/stdc++.h>
using namespace std;
int a[1005],n,k,used[1005];
void Try(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=true;
			if(i==n){
				for(int i=1;i<=n;i++){
					cout<<a[i];
				}
				cout<<' ';
			}
			else Try(i+1);
			used[j]=false;
		}
		
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		Try(1);
		cout<<endl;
	}
}

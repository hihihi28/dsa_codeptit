#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
bool check[100];
int ans=0;
void next(int a[]){
	
	for(int i=1;i<=k;i++){
		check[a[i]]=1;
	}
	int i=k;
	while(i>=1&&a[i]==n-k+i) i--;
	if(i==0){
		cout<<k<<endl;
		return;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
	for(int i=1;i<=k;i++){
		if(check[a[i]]==0) ans++;
	}
	cout<<ans<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++) cin>>a[i];
		memset(check, 0, sizeof(check));
		ans = 0;
		next(a);
	}
}

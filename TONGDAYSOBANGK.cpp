#include<bits/stdc++.h>
using namespace std;
int a[1000],b[1000];
int n,k;
int cnt=0;
void solve(){
	int sum=0;
	
	for(int i=0;i<n;i++ ){
		sum+=a[i]*b[i];
		
	}
	if(sum==k){
		cnt++;
		for(int i=0;i<n;i++ )
			if(b[i]) cout<<a[i]<<" ";
		cout<<endl;	
		
	}
	
}
void Try(int i){
	for(int j=0;j<=1;j++){
		b[i]=j;
		if(i==n-1){
			solve();
		}
		else Try(i+1);
	}
}
int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	Try(0);
	cout<<cnt;
}

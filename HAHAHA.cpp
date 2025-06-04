#include<bits/stdc++.h>
using namespace std;
char s[1000];
int a[1000],n;
void solve(){
	int ok=0;
	for(int i=0;i<n-1;i++){
		if(s[0]!='H'||s[n-1]!='A'||(s[i]=='H'&&s[i+1]=='H')){
			ok=1;
		}
	}
	if(ok==0){
		for(int i=0;i<n;i++){
			cout<<s[i];
		}
		cout<<endl;
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(a[i]==1) s[i]='H';
		else s[i]='A';
		if(i==n-1){
			solve();
		} 
		else Try(i+1);
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n;
		Try(0);
	}
}

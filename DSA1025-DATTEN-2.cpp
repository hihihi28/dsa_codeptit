#include<bits/stdc++.h>
using namespace std;
char b[100];
int n,k,a[100];

void Try(int i){
	
	for(int j=a[i-1]+1;j<=n-k+i;j++){
	
		a[i]=j;
		if(i==k){
			string s;
			for(int i=1;i<=k;i++){
				s.push_back(a[i]-1+'A');
			}
			cout<<s<<endl;
		}
		else {Try(i+1);}
		
		
		
	}
	
}
int main(){
	int t;cin>>t;
	while(t--){
	
		cin>>n>>k;	
	

		Try(1);
	}
}

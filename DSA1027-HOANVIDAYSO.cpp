#include<bits/stdc++.h>
using namespace std;
int n,used[100];
int a[100],b[100];

void Try(int i){
	
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=b[j];
			used[j]=1;
			if(i==n){
			
				for(int k=1;k<=n;k++){
					cout<<a[k]<<' ';
				}
				cout<<"\n";
			}
			else {Try(i+1);}
			used[j]=0;
		}
		
	}
	
}
int main(){
	int t;t=1;
	while(t--){
	
		cin>>n;	
	
		for(int i=1;i<=n;i++) 
		{
			cin>>b[i];
			
		}
		
		sort(b+1, b + n+1); 
		Try(1);
	}
}

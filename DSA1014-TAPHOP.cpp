#include<bits/stdc++.h>
using namespace std;
int n,k,s,a[100];
int cnt=0;
void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			int sum=0;
			for(int l=1;l<=k;l++){
				sum+=a[l];
			}
			if(sum==s) cnt++;
		}
		else Try(i+1);
	}
}
int main(){
	while(cin>>n>>k>>s){
		if(n==0&&k==0&&s==0){
			break;
		}
		cnt=0;
		Try(1);
		cout<<cnt<<endl;
	}
}

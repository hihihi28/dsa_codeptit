#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],n,k,cnt,c[100];
int check(){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i]*b[i];
	}
	if(sum==k) return 1;
	else return 0;
}
void in(){
	cnt++;
	for(int i=0;i<n;i++){
		c[i]=a[i]*b[i];
		if(c[i]!=0){
			cout<<a[i]*b[i]<<' ';
		}
		
	}
	cout <<endl;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		b[i]=j;
		if(i==n-1){
			if(check()){
				in();
			}
		}
		else Try(i+1);
	}
}
int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	Try(0);
	cout<<cnt;
}

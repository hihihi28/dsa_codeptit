#include<bits/stdc++.h>
using namespace std;
int a[100], n;
bool check(){
	for(int i=0;i<n/2;i++){
		if(a[i]!=a[n-1-i]){
			return false;
		}
	}
	return true;
}
void in(){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout <<'\n';
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n-1){
			if(check()) in();
		}
		else Try(i+1);
	}
}
int main()
{
	cin>>n;
	Try(0);
}

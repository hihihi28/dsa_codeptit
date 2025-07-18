#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t=1;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		ll m1,m2,m3,m4;
		m1=a[0]*a[1];
		m2=a[n-1]*a[n-2]*a[n-3];
		m3=a[0]*a[1]*a[n-1];
		m4=a[n-1]*a[n-2];
		cout<< max(max(m1,m2),max(m3,m4))<<endl;
	}
}

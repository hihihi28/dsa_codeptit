#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		ll ans=0;
		for(int i=0;i<n;i++) {
			ans=(ans+i*a[i])%mod;
		}
		cout<<ans<<endl;
	}
}

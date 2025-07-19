#include <bits/stdc++.h>
using namespace std;

int dp[1005];

int main() {
    int t=1;
    //cin >> t;
    while (t--) {
    	int n;cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++) cin >> a[i];
    	int ans=-1;
     	for(int i=0;i<n;i++){
     		dp[i]=1;
     		for(int j=0;j<n;j++){
     			if(a[i]>a[j]){
     				dp[i]=max(dp[i],dp[j]+1);
				 }
			}
			 ans=max(ans,dp[i]);
		 }
        cout<<ans<<endl;
    }
}


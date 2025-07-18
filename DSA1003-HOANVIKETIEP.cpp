#include<bits/stdc++.h>
using namespace std;
int a[1005],n;
void next(){
	int i=n-1;
	while(i>=1&&a[i]>=a[i+1]) i--;
	if(i==0){
		for(int i=1;i<=n;i++){
			cout<<i<<' ';
		}
	}
	else{
		int j = n;
	    while (a[i] > a[j]) j--;
	    swap(a[i], a[j]);
	    int l=i+1,r=n;
	    while(l<r){
	    	swap(a[l++],a[r--]);
		}
		for (int i = 1; i <= n; ++i) {
        	cout << a[i] << " ";
    	}
	}
	
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
    	cin>>n;
    	for (int i = 1; i <= n; ++i) {
        	cin>>a[i];
    	}	
        next();
        cout << "\n";
    }
    return 0;
}

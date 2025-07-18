#include<bits/stdc++.h>
using namespace std;
int a[100],n,k;
bool check(){
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]) cnt++;
	}
	if(cnt==k) return true;
	return false;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n-1){
			if(check()){
				for(int i=0;i<n;i++){
					cout<<a[i];
				}
				cout<<endl;
			}
		}
		else Try(i+1);
	}
}
int main(){
		int T;
    cin >> T;
    while (T--) {
        cin >> n>>k;
        Try(0);
        
    }
}

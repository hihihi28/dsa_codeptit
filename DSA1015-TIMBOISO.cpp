#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(int n){
	queue<ll>q;
	q.push(9);
	while(!q.empty()){
		ll x=q.front();
		q.pop();
		if(x%n==0){
			cout<<x<<endl;
			return;
		}
		q.push(10*x);
		q.push(10*x+9);
	}
	
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		solve(n);
	}
}

#include <bits/stdc++.h>
using namespace std;
const int BASE=1e9+7;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        priority_queue<int, vector<int>, greater<int>> pq;
		while(n--){
			int x;
			cin>>x;
			pq.push(x);
		}
		long long m=0;
		while(pq.size()>1){
			int a=pq.top(); pq.pop();
			int b=pq.top(); pq.pop();
			long long sum=(a+b)%BASE;
			m=(m+sum)%BASE;
			pq.push(sum);
		}
		cout<<m<<endl;
    }
    return 0;
}


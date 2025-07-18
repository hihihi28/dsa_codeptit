#include <bits/stdc++.h>
using namespace std;

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
		long long sum=0;
		while(pq.size()>1){
			int a=pq.top(); pq.pop();
			int b=pq.top(); pq.pop();
			sum+=a+b;
			pq.push(a+b);
		}
		cout<<sum<<endl;
    }
    return 0;
}


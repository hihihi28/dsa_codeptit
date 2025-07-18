#include <bits/stdc++.h>
using namespace std;
int b[100005];

int main() {
    int t;
    cin >> t;
    while (t--) {
    	 for (int i = 0; i < 100005; i++) {
            b[i]=0;
        }
        int n,x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[a[i]]++;
        }
        int ok=0;
    	for (int i = 0; i < n; i++){
    		if(a[i]==x){
    			if(b[a[i]]){
    				ok=1;
    				cout<<b[a[i]]<<endl;
    				break;
				}
			
			}
		}
		if(ok==0) cout<<-1<<endl;
        //cout << endl;
    }
    return 0;
}


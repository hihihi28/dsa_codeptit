#include <bits/stdc++.h>
using namespace std;

int n, k, a[100];
vector<string> b, c;

void Try(int i) {
    for (int j = a[i-1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            for (int l = 1; l <= k; l++) {
                cout << c[a[l] - 1];
                if (l < k) cout << " ";
            }
            cout << endl;
        } else {
            Try(i + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> k;
    b.resize(n);
    set<string> se;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        se.insert(b[i]);
    }
    
    c.assign(se.begin(), se.end());
    n = c.size(); 
    
    Try(1);
    
    return 0;
}

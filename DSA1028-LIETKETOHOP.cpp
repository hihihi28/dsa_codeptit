#include <bits/stdc++.h>
using namespace std;

int a[25], n, k, c[25]; 

void Try(int i) {
    for (int j = a[i-1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) {
            for (int l = 1; l <= k; l++) {
                cout << c[a[l]] << ' ';
            }
            cout << endl;
        } else {
            Try(i + 1);
        }
    }
}

int main() {
    int t;
    t=1;
    while (t--) {
        cin >> n >> k;
        set<int> se;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            se.insert(x);
        }
      
        n = se.size();
        int i = 1;
        for (int x : se) {
            c[i++] = x;
        }
  
        a[0] = 0;
        Try(1);
    }
    return 0;
}

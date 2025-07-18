#include <bits/stdc++.h>
using namespace std;

int a[10005];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        // TH1: ch?n K ph?n t? nh? nh?t
        sort(a + 1, a + n + 1);
        long long x = 0, y = 0;
        for (int i = 1; i <= k; i++) {
            x += a[i];
        }
        for (int i = k + 1; i <= n; i++) {
            y += a[i];
        }
        long long max1 = abs(y - x);

        // TH2: ch?n K ph?n t? l?n nh?t
        sort(a + 1, a + n + 1, greater<int>());
        long long x1 = 0, y1 = 0;
        for (int i = 1; i <= k; i++) {
            x1 += a[i];
        }
        for (int i = k + 1; i <= n; i++) {
            y1 += a[i];
        }
        long long max2 = abs(y1 - x1);

        cout << max(max1, max2) << endl;
    }

    return 0;
}


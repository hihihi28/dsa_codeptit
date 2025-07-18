#include <bits/stdc++.h>
using namespace std;

int n;

int LIS_optimized(int a[]) {
    vector<int> b(n + 1, INT_MAX);
    int result = 0;
    for (int i = 0; i < n; i++) {
        int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        b[k] = a[i];
        result = max(result, k + 1);
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << n - LIS_optimized(a);
}


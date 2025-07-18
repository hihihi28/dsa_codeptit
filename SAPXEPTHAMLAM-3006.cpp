#include <bits/stdc++.h>
using namespace std;

bool isSortable(vector<int>& a) {
    int n = a.size();
    vector<int> b = a;
    sort(b.begin(), b.end());

    for (int i = 0; i <= n / 2; ++i) {
        int j = n - 1 - i;
        if (!(
            (a[i] == b[i] && a[j] == b[j]) || 
            (a[i] == b[j] && a[j] == b[i])
        )) {
            return false;
        }
    }
    return true;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        cout << (isSortable(a) ? "Yes" : "No") << endl;
    }
    return 0;
}


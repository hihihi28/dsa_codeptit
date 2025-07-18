#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[20];
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a + n);
        long long a1 = 0, a2 = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                a1 = a1 * 10 + a[i];
            } else {
                a2 = a2 * 10 + a[i];
            }
        }
        cout << a1 + a2 << endl;
    }
    return 0;
}

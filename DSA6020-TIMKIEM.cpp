#include <bits/stdc++.h>
using namespace std;

int n, x;

int check(int a[], int x) {
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) return 1;
        else if (a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << check(a, x) << endl;
    }
    return 0;
}


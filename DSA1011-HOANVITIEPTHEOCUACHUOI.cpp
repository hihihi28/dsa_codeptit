 #include <bits/stdc++.h>
using namespace std;

int a[100];

void solve(int test_id, string s) {
    int n = s.size();
    for (int i = 1; i <= n; i++) {
        a[i] = s[i - 1] - '0';
    }

    int i = n - 1;
    while (i >= 1 && a[i] >= a[i + 1]) i--;

    if (i == 0) {
        cout << test_id << " BIGGEST" << endl;
        return;
    }

    int j = n;
    while (a[j] <= a[i]) j--;
    swap(a[i], a[j]);
    reverse(a + i + 1, a + n + 1);

    cout << test_id << " ";
    for (int k = 1; k <= n; k++) {
        cout << a[k];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int test_id;
        string s;
        cin >> test_id >> s;
        solve(test_id, s);
    }
    return 0;
}


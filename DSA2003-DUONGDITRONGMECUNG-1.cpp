#include <bits/stdc++.h>
using namespace std;

int a[20][20], n;
bool ok;

void Try(int i, int j, string x) {
    if (i == n - 1 && j == n - 1) {
        cout << x << ' ';
        ok = true;
        return;
    }

    // Di xuong
    if (i + 1 < n && a[i + 1][j] == 1) {
        Try(i + 1, j, x + 'D');
    }

    // Di sang phai
    if (j + 1 < n && a[i][j + 1] == 1) {
        Try(i, j + 1, x + 'R');
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        ok = false;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];

        // Neu o bat dau hoac ket thuc bang 0 thi khong the di
        if (a[0][0] == 0 || a[n - 1][n - 1] == 0) {
            cout << "-1\n";
            continue;
        }

        // Goi ham quay lui tu vi tri bat dau
        Try(0, 0, "");

        // Neu khong co duong di nao hop le
        if (!ok) cout << "-1";
        cout << endl;
    }
    return 0;
}


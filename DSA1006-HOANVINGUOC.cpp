#include <bits/stdc++.h>
using namespace std;

int a[15], used[15], n;

void Try(int i) {
    for (int j = n; j >= 1; j--) {
        if (!used[j]) {
            a[i] = j;
            used[j] = 1;
            if (i == n) {
                for (int k = 1; k <= n; k++) cout << a[k];
                cout << " ";
            } else Try(i + 1);
            used[j] = 0;
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> n;
//        memset(used, 0, sizeof(used));
        Try(1);
        cout << "\n";
    }
    return 0;
}


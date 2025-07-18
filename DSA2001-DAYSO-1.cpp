#include <bits/stdc++.h>
using namespace std;

int n, a[100], b[100];
vector<string> v;

void Try(int k) {
    string s = "[";
    for (int i = 1; i <= k; i++) {
    	stringstream ss;
    	ss<<a[i];
        s += ss.str();
        if (i < k) s += " ";
    }
    s += "]";
    v.push_back(s);

    if (k > 1) {
        for (int i = 1; i < k; i++) {
            b[i] = a[i] + a[i + 1];
        }
        for (int i = 1; i < k; i++) {
            a[i] = b[i];
        }
        Try(k - 1);
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        v.clear();
        Try(n);
        for (int i=v.size()-1;i>=0;i--) {
            cout << v[i] << ' ';
        }
        cout<<endl;
    }
    return 0;
}


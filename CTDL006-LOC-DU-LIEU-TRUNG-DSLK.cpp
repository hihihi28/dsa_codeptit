#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n; // Nhap so luong phan tu
    vector<int> order; // Luu thu tu xuat hien
    unordered_map<int, bool> mp; // Map de luu cac gia tri duy nhat

    // Nhap danh sach
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (!mp[x]) { // Neu gia tri chua xuat hien
            mp[x] = true;
            order.push_back(x); // Luu vao vector de giu thu tu
        }
    }

    // In ra cac gia tri duy nhat theo thu tu xuat hien
    for (int x : order) {
        cout << x << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
// DEM NODE LA CAY NPTK CAN BANG 
struct node {
    int val;
    node* left;
    node* right;
    node(int x) {
        val = x;
        left = right = NULL;
    }
};

node* build(int a[], int l, int r) {
    if (l > r) return NULL;
    int m = (l + r) / 2;
    node* root = new node(a[m]);
    root->left = build(a, l, m - 1);
    root->right = build(a, m + 1, r);
    return root;
}


int countLeaves(node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    return countLeaves(root->left) + countLeaves(root->right);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a, a + n);
        node* root = build(a, 0, n - 1);
        cout << countLeaves(root) << endl;
    }
    return 0;
}


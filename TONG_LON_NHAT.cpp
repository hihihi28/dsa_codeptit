#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *left, *right;
    Node(int x) {
        val = x;
        left = right = NULL;
    }
};

void makeNode(Node *root, int v, char c) {
    if (c == 'L') {
        root->left = new Node(v);
    } else {
        root->right = new Node(v);
    }
}

void insert(Node *root, int u, int v, char c) {
    if (root == NULL) return;
    if (root->val == u) {
        makeNode(root, v, c);
        return;
    }
    insert(root->left, u, v, c);
    insert(root->right, u, v, c);
}

int res;

int max_sumNode(Node *root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return root->val;

    int sumLeft = root->left ? max_sumNode(root->left) : INT_MIN;
    int sumRight = root->right ? max_sumNode(root->right) : INT_MIN;

    if (root->left != NULL && root->right != NULL) {
        res = max(res, sumLeft + sumRight + root->val);
    }

    return max(sumLeft, sumRight) + root->val;
}

int findMaxSum(Node *root) {
    res = INT_MIN;
    max_sumNode(root);
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Node *root = NULL;
        while (n--) {
            int u, v;
            char c;
            cin >> u >> v >> c;
            if (root == NULL) {
                root = new Node(u);
                makeNode(root, v, c);
            } else {
                insert(root, u, v, c);
            }
        }
        cout << findMaxSum(root) << endl;
    }
    return 0;
}


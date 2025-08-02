#include <bits/stdc++.h>
using namespace std;

int level[100005]; 

struct Node {
    int val;
    Node *left, *right;
    Node(int x) {
        val = x;
        left = right = NULL;
    }
};

Node* insert(Node* root, int value) {
    if (root == NULL) return new Node(value);
    if (value < root->val)
        root->left = insert(root->left, value);
    else if (value > root->val)
        root->right = insert(root->right, value);
    return root;
}

void preOrder(Node* root) {
    if (root == NULL) return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> level[i];
        Node* root = NULL;
        for (int i = 0; i < n; i++) root = insert(root, level[i]);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

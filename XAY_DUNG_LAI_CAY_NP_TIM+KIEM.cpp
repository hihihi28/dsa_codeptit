#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x) {
    	val=x;
    	left=right=NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }
    if (val < root->val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

// Function to perform pre-order traversal of the BST
void pre_order(Node* root) {
    if (root == NULL) return;
    cout << root->val << ' ';
    pre_order(root->left);
    pre_order(root->right);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> level_order(n);
        for (int i = 0; i < n; ++i) {
            cin >> level_order[i];
        }
        
        Node* root = NULL;
        for (int val : level_order) {
            root = insert(root, val);
        }
        
        pre_order(root);
        cout << endl;
    }
    return 0;
}


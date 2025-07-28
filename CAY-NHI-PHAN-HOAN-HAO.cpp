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

// Tạo node con cho node có giá trị u
void makeNode(Node *root, int u, int v, char c) {
    if (c == 'L') root->left = new Node(v);
    else root->right = new Node(v);
}

// Chèn node mới vào cây
void insert(Node *root, int u, int v, char c) {
    if (root == NULL) return;
    if (root->val == u) {
        makeNode(root, u, v, c);
    } else {
        insert(root->left, u, v, c);
        insert(root->right, u, v, c);
    }
}

// Kiểm tra cây có phải cây nhị phân đầy đủ không
int check1(Node *root) {
    if (root == NULL) return 1; // Cây rỗng là hợp lệ
    if ((root->left == NULL && root->right != NULL) ||
        (root->left != NULL && root->right == NULL))
        return 0; // Có đúng một con → không đầy đủ
    return check1(root->left) && check1(root->right);
}

// Tính chiều cao cây
int height(Node *root) {
    if (root == NULL) return 0;
    return 1 + max(height(root->left), height(root->right));
}

// Kiểm tra các lá có cùng mức hay không
int check2(Node *root, int level, int h) {
    if (root == NULL) return 1; // Cây rỗng là hợp lệ
    if (root->left == NULL && root->right == NULL) {
        return level == h - 1; // mức lá phải là h-1 vì bắt đầu từ 0
    }
    return check2(root->left, level + 1, h) && check2(root->right, level + 1, h);
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
                makeNode(root, u, v, c);
            } else {
                insert(root, u, v, c);
            }
        }

        int h = height(root);
        if (check1(root) && check2(root, 0, h))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node *left, *right;
    Node(int x) {
        val = x;
        left = right = NULL;
    }
};

void makeNode(Node *root, int u, int v, char c) {
    if (c == 'L') {
        if (root->left == NULL)
            root->left = new Node(v);
    } else {
        if (root->right == NULL)
            root->right = new Node(v);
    }
}

void insert(Node *root, int u, int v, char c) {
    if (root == NULL) return;
    if (root->val == u) {
        makeNode(root, u, v, c);
        return;
    }
    insert(root->left, u, v, c);
    insert(root->right, u, v, c);
}
void nhap(Node *&root){
	 int n;
        cin >> n;
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
}
int check(Node *root1,Node *root2){
	if(root1 == NULL && root2 == NULL) return 1;
	if(root1 == NULL || root2 == NULL) return 0;
	if(root1->val != root2->val) return 0;
	return check(root1->left,root2->left ) && check(root1->right,root2->right);
} 
int main(){
	int t;
    cin >> t;
    while (t--) {
        Node *root1 = NULL;
        Node *root2 = NULL;
        nhap(root1);
        nhap(root2);
        if (check(root1,root2)) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}

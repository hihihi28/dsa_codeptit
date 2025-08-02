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
int n, a[1005];
Node* insert(Node* root, int value){
    if(root == NULL) return new Node(value);
    if(root->val < value) root->right = insert(root->right, value);
    if(root->val > value) root->left = insert(root->left, value);
    return root;
}
int cnt;
void printNode(Node *root){
    if (root == NULL) return;

    if (root->left != NULL || root->right != NULL)
        cnt++;
    
    printNode(root->left);
    printNode(root->right);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        cnt = 0;
        Node * root = NULL;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            insert(root, a[i]);
        }
        for(int i=0; i<n; i++) {
           
            root = insert(root, a[i]);
        }
        printNode(root);
        cout<<cnt << endl;
    }
}
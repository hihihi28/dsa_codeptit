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
int n;
int pre[1005];
Node* insert(Node *root, int value){
    if(root==NULL) return new Node(value);
    if(value < root->val) root->left = insert(root->left, value);
    if(value > root->val) root->right = insert(root->right, value);
    return root;
}
void leaf(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) {
        cout << root->val << ' ';
        return;
    }
    leaf(root->left);
    leaf(root->right);
}
int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin >>n;
        for(int i=0;i<n;i++) cin >> pre[i];
        Node *root = NULL;
        for(int i=0;i<n;i++) root = insert(root, pre[i]);
        leaf(root);
        cout<<endl;
    }
    
}
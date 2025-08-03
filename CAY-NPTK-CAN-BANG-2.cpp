#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *left, *right;
    Node(int x){
        val=x;
        left = right = NULL;
    }
};
void preOrder(Node *root){
    if(root == NULL) return;
    cout << root->val << ' ';
    preOrder(root->left);
    preOrder(root->right);
}
Node* build(int a[], int l, int r){
    if(l > r) return NULL;
    int mid = (l+r) / 2;
    Node *root= new Node(a[mid]);
    root->left = build(a, l, mid - 1);
    root->right =build(a, mid+1, r);
    return root;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++) 
            cin >> a[i];
      
       sort(a, a+n);
       Node* root = build(a, 0, n-1);
        
        preOrder(root);
        cout << endl;
    }
}
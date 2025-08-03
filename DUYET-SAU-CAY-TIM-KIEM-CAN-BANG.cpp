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
void postOrder(Node *root){
    if(root == NULL) return;
    
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << ' ';
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
        
        postOrder(root);
        cout << endl;
    }
}
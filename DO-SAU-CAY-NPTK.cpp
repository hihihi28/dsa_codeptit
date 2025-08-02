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
    if(root ==  NULL) return new Node(value);
    if(value > root->val) root->left = insert(root->left, value);
    if(value < root->val) root->right = insert(root->right, value);
    return root;
}

int heigh(Node* root){
    
    if(root == NULL) return -1;
    
    return 1 + max(heigh(root->left), heigh(root->right));
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        Node * root = NULL;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            insert(root, a[i]);
        }
        for(int i=0; i<n; i++) {
           
            root = insert(root, a[i]);
        }
       
        cout<<heigh(root) << endl;
    }
}
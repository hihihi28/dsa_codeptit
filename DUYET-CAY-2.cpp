#include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *left, *right;
    Node (int x){
        val=x;
        left=right=NULL;
    }
};
int lev[1001], n;
map<int,int> mp;
Node* build(int i, int l, int r){
    if(i >= n || l > r) return NULL;
    Node *root = new Node(lev[i]);
    int m = mp[lev[i]];
    root->left = build(2*i + 1, l, m-1);
    root->right = build(2*i + 2, m+1, r);
    return root;
}
void postOrder(Node *root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}
int main(){
    int t;
    cin >>t;
    while (t--)

    {
       cin >>n;
       for(int i =0; i<n; i++){
            int e; cin>>e;
            mp[e] = i;
       }
       for(int i =0; i<n; i++) cin >> lev[i];
       
        Node *root = build(0, 0, n-1);
        postOrder(root);
       
       cout << endl;
       mp.clear();
    }
    
}
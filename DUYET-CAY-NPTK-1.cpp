#include<bits/stdc++.h>
using namespace std;
int pre[1001];
struct Node
{
    int val;
    Node *left, *right;
    Node (int x){
        val=x;
        left = right = NULL;
    }
};
int n;
Node* build(int l, int r){
    if(l > r) return NULL;
    Node *root= new Node(pre[l]);
    int i=l+1;
    while(i < n && pre[i]< pre[l]) i++;
    root->left = build(l+1, i-1);
    root->right = build ( i, r);
    return root;
}
void postOrder(Node *root){
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val<<' ';
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        //int n;
        cin >>n;
        for(int i=0;i<n;i++){
            cin >>pre[i];
        }
 
        postOrder(build(0,n-1));
        cout <<endl;    
    }
    
}
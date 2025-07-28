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
map<int,int>mp;
int curIndex, pre[1001];
Node* build(int l,int r){
  if(l>r) return NULL;
  Node *root=new Node(pre[curIndex]);
  int m=mp[pre[curIndex]];curIndex++;
  root->left=build(l,m-1);
  root->right=build(m+1,r);
  return root;
}
void postOrder(Node *root){
  if(root==NULL) return;
  postOrder(root->left);
  postOrder(root->right);
  cout<<root->val<<" ";
}
int main(){
  int t;cin>>t;
  while(t--){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      int e;cin>>e;
      mp[e]=i;
    }
    for(int i=0;i<n;i++) cin>>pre[i];
    curIndex=0;
    Node *root= build(0,n-1);
    postOrder(root);
    cout<<endl;
  }
}
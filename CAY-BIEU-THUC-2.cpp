#include <bits/stdc++.h>
using namespace std;
struct Node{
    string c;
    Node *left, *right;
    Node (string x){
        c=x;
        left=right=NULL;
    }
};
string s[1001];
int n;
Node* build(int i){
    if(i >= n) return NULL;
    Node *root = new Node(s[i]);
    root->left = build(2*i + 1);
    root->right = build(2*i + 2);
    return root;
}
int solve(Node *root){
    if(root->left == NULL && root->right == NULL) return stoi(root->c);
    int leftVal = solve(root->left);
    int righVal = solve(root->right);
    if(root->c == "+" ) return leftVal + righVal;
    else if(root->c == "-" ) return leftVal - righVal;
    else if(root->c == "*" ) return leftVal * righVal;
    else if(root->c == "/" ) return leftVal / righVal;
    return 0;
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        for(int i=0; i<n; i++) cin >> s[i];
        Node *root = build(0);
        cout << solve(root) << '\n';
    }
    
}
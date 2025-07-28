#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node* left, *right;
    Node (int x){
        val = x;
        left = right = NULL;
    }
};
void makeNode(Node *root, int u, int v, char c){
    if(c == 'L'){
       root->left = new Node(v);
    }
    else root->right = new Node(v);
}
void insert(Node *root, int u, int v, char c){
    if(root == NULL) return;
    if(root->val == u){
        makeNode(root,u,v,c);
    }
    insert(root->left,u,v,c);
    insert(root->right,u,v,c);
}
void spiOrder(Node *root){
    map<int, vector<int>>mp;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while (q.size())
    {

       Node *n = q.front().first;
       int level = q.front().second;
       q.pop();
       mp[level].push_back(n->val);
       if(n->left != NULL) {
            q.push({n->left, level+1});
       }
       if(n->right != NULL) {
            q.push({n->right, level+1});
       }
    }
    for(auto e : mp){
        if(e.first % 2 == 1){
            for(int tmp: e.second) cout<<tmp<<" ";
        }
        else{
            for(int i = e.second.size() - 1; i >= 0; i--) cout << e.second[i] <<" ";
        }
    }
}
int main(){
    int t;
    cin >>t;
    while (t--)
    {
        int n;
        cin >> n;
        Node *root=NULL;
        while(n--){
            int u,v;
            char c;
            cin >>u>>v>>c;
            if(root == NULL){
                root = new Node(u);
                makeNode(root,u,v,c);
            }
            else insert(root,u,v,c);
        }
        spiOrder(root);
        cout<< endl;
    }
    
}
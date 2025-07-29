#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *left, *right;
    Node(int x){
        val = x;
        left = right = NULL;
    }
};
void makeNode(Node *root, int u, int v, char c){
    if(c == 'L') root->left = new Node (v);
    else root->right = new Node(v);
}
void insert(Node *root, int u, int v, char c){
    if(root == NULL) return;
    if(root->val == u){
        makeNode(root, u,v,c);
    }
    insert(root->left,u,v,c);
    insert(root->right,u,v,c);
}
int check(Node* root1, Node* root2){
    if(root1  == NULL && root2 ==NULL)  return 1;
    if(root1->val != root2->val) return 0;
    return check(root1->left, root2->left) && check(root2->left, root1->left);
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n1; cin >> n1;
        
        Node *root1 = NULL;
        Node *root2 = NULL;
        while (n1--)
        {
            int u1, v1;
            char c1;
            cin >> u1 >> v1 >>c1;
            if(root1 == NULL){
                root1 = new Node(u1);
                makeNode(root1,u1,v1,c1);
            }
            insert(root1,u1,v1,c1);

           
        }
        int n2; cin >>n2;
        while (n2--)
        {
             int u2, v2;
            char c2;
            cin >> u2 >> v2 >>c2;
            if(root2 == NULL){
                root2 = new Node(u2);
                makeNode(root2,u2,v2,c2);
            }
            insert(root2,u2,v2,c2);
        }
        
        cout<< check(root1, root2) <<endl;
    }
    
}
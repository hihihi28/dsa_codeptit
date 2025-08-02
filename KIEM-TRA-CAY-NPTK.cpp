#include<bits/stdc++.h>
using namespace std;

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


int main(){
    int t;
    cin >> t;
    while (t--)
    {
        //int n;
        cin >>n;
        int a[n];
        for(int i=0; i<n;i++) cin>>a[i];
        int ok=1;
        for(int i=1;i<n; i++){
            if(a[i]<=a[i-1]){
                ok=0;
                break;
            }
        }
        if(ok) cout<<1;
        else cout<<0;
        cout <<endl;    
    }
    
}
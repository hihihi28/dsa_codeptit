#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >>t;
    while(t--){
      int n;
      cin >>n;
      set<int>se;
      while (n--){
        int u,v;
        char c;
        cin >>u>>v>>c;
        se.insert(u);
        se.insert(v);
      }
      for(int x:se) cout<<x<<" ";
     cout<<endl;
    }
}
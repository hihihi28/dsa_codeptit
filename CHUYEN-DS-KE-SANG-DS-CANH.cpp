#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> edge; 
int main(){
    int t;
    t=1;
    while(t--){
       int n;
        cin >> n;
        cin.ignore();
        for(int i = 0; i < n; i++) {
            string s, num;
            getline(cin, s);
            stringstream ss(s);
            while (ss>> num)
            {
                if(stoi(num)>i){
                    edge.push_back({i+1, stoi(num)});
                }
            }
            
        }
       for(auto it: edge){
            cout<<it.first<<" "<<it.second<<endl;
        }
        //cout<< endl;
        edge.clear(); 
    }
}
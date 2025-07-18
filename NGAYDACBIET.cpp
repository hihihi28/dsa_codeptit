#include <bits/stdc++.h>
using namespace std;
vector<string>v;
int a[10];
bool check(string s){

	int d= stoi(s.substr(0,2));
	int m= stoi(s.substr(2,2));
	int y= stoi(s.substr(4));
	if(d>=1 && d<=31 && m>=1 && m<=12 && y>=2000){
		return true;
	}
	return false;

}
void solve() {
    string s;
    for(int i = 0; i < 8; i++) {
        s += to_string(a[i]);
    }

    int d = stoi(s.substr(0, 2));
    int m = stoi(s.substr(2, 2));
    int y = stoi(s.substr(4, 4));

    if (check(s)) {
        s.insert(2, 1, '/');
        s.insert(5, 1, '/');
        v.push_back(s);
    }
}
void Try(int i){
	for(int j=0;j<=1;j++){
		if(j==0) a[i]=0;
		else a[i]=2;
		if(i==7) {
			solve();
		}
		else Try(i+1);
	}
}
int main(){
	Try(0);
	sort(v.begin(),v.end());
	for(string x:v) cout<<x<<endl;
}

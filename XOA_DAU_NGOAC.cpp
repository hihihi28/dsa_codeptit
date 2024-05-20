#include<bits/stdc++.h>
using namespace std;
set<string> se;
queue<string> q;
void xoadaungoac(string s) {
	vector<pair<int, int>> v;
	stack<int> st;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(')  st.push(i);
		if (s[i] == ')') {
			v.push_back({ st.top(),i });
			st.pop();
		}
	}
	for (auto x : v) {
		string f = s; f.erase(x.first, 1);
		f.erase(x.second - 1, 1);
		if (se.count(f)==0) {
			q.push(f);
			se.insert(f);
		}
	}
}
int main() {
	string s; cin >> s;
	q.push(s);
	while (q.size()) {
		string g = q.front();
		q.pop();
		xoadaungoac(g);
	}
	for (auto c : se)   cout << c << endl;
	
}

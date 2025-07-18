#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100],cnt=0;
vector<string>v;
bool check(string s){
	int dem=0,i=0;
	while(i<s.size()){
		if(s[i]=='A'){
			int cnt=0;
			while(i<s.size()&&s[i]=='A'){
				cnt++;
				i++;
			}
			if(cnt==k) dem++;
			else if(cnt>k) return false;
		}
		else{
			i++;
		}
	}
	if(dem==1) return true;
	else return false;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			string s="";
			for(int l=1;l<=n;l++){
				s.push_back(a[l]+'A');
			}
			if(check(s)) {
				cnt++;
				v.push_back(s);
			}
		}
		else Try(i+1);
	}
}
int main(){
	cin>>n>>k;
	v.clear();
	Try(1);
	cout<<cnt<<endl;
	for(string i:v) cout<<i<<endl;
}

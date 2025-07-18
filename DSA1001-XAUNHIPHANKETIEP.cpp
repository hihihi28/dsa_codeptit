#include<bits/stdc++.h>
using namespace std;
string s;
void sinh(string s){
	int n=s.size();
	int i=n-1;
	while(i>=0&&s[i]=='1'){
		i--;
	}
	if(i>=0){
		s[i]='1';
		for(int j=i+1;j<n;j++){
			s[j]='0';
		}
	}
	else{
		s=string(n,'0');
	}
	cout<<s<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>s;
		sinh(s);
	}
}


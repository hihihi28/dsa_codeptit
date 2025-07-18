#include<bits/stdc++.h>
using namespace std;
int a[100],n;
bool check(string s){
	if(s.size()<6) return false;
	if (s[0]!='8' || s[s.size()-1]!='6') return false;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]=='8'&&s[i+1]=='8') return false;
	}
	for(int i=0;i<s.size()-2;i++){
		if(s[i]=='6'&&s[i+1]=='6'&&s[i+2]=='6'&&s[i+3]=='6') return false;
	}
	return true;
}
void Try(int i){
	for(int j=0;j<=1;j++){
		if(j==0) a[i]=6;
		else a[i]=8;
		if(i==n){
			string s="";
			for(int k=1;k<=n;k++){
				s.push_back(a[k]+'0');
			}
			if(check(s)) cout<<s<<endl;
			}else {
			Try(i+1);
		}
	}
		
	
}
int main(){
	cin>>n;
	Try(1);
}

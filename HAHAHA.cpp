#include <bits/stdc++.h>
using namespace std;
int n;
char a[100];
vector<string>v;
bool check(){
	if(a[0]!='H'||a[n-1]!='A' ) return false;
	for(int i=0;i<n-1;i++){
		if(a[i]=='H'&&a[i+1]=='H') return false;
		
	}
	return true;
}
void Try(int i){
	
	for(int j=0;j<=1;j++){
		if(j==0) a[i]='H';
		else a[i]='A';
		if(i==n-1){
			if(check()){
				string res="";
				for(int k=0;k<n;k++){
					res+=a[k];
				}
				v.push_back(res);
				
			}
		}
		else Try(i+1);
	}
	
}
int main(){
	int t;cin>>t;

	while(t--){
		cin>>n;
		v.clear();
		Try(0);
		
		sort(v.begin(),v.end());
		for (auto i:v) cout<<i<<endl;
	}
}



#include<bits/stdc++.h>
using namespace std;
string s;
int a[100],b[100];
vector<string>v;
void Try(int i){
	int n=s.size();
	for(int j=1;j<=n;j++){
		if(!b[j]){
			b[j]=1;
			a[i]=j-1+'A';
			if(i==n){
				string res="";
				for(int k=1;k<=n;k++){
					stringstream ss;
					ss<<(a[i]);
					res+=ss.str();
				}
				v.push_back(res);
			}
			else Try(i+1);
			b[j]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		Try(1);
	}
}

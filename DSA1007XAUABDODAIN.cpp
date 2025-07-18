#include<bits/stdc++.h>
using namespace std;
int n,k;
char a[1005];
void Try(int i){
	for(int j=0;j<=1;j++){
		if(j==0) a[i]='A';
		else a[i]='B';
		if(i==n-1){
			for(int i=0;i<n;i++){
				cout<<a[i];
			}
			cout<<' ';
		}
		else Try(i+1);
	}
}
int main(){
	int T;
    cin >> T;
    while (T--) {
        cin >> n;
        Try(0);
        cout << "\n";
    }
    return 0;
}

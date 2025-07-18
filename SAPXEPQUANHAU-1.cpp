#include <bits/stdc++.h>
using namespace std;

int cot[20], cheo1[40], cheo2[40], n;
int cnt = 0;

void Try(int i) {
    for(int j = 1; j <= n; j++) {
        if(!cot[j] && !cheo1[i - j + n] && !cheo2[i + j - 1]) {
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 1;
            if(i == n) cnt++;
            else Try(i + 1);
            cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 0;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        cnt = 0;
        memset(cot, 0, sizeof(cot));
        memset(cheo1, 0, sizeof(cheo1));
        memset(cheo2, 0, sizeof(cheo2));
        Try(1);
        cout << cnt << endl;
    }
}


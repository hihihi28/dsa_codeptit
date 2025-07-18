#include <bits/stdc++.h>
using namespace std;

int dx[2] = {1, 0}; 
int dy[2] = {0, 1}; 
int used[100][100], a[100][100];
int m, n, cnt = 0;

bool check(int x, int y){
    return x >= 0 && x < m && y >= 0 && y < n;
}

void dfs(int i, int j){
    if(i == m - 1 && j == n - 1){
        cnt++;
        return;
    }

    used[i][j] = 1;
    for(int k = 0; k < 2; k++){
        int nx = i + dx[k];
        int ny = j + dy[k];
        if(check(nx, ny) && !used[nx][ny]){
            dfs(nx, ny);
        }
    }
    used[i][j] = 0; 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> m >> n;
        cnt = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        memset(used, 0, sizeof(used));
        dfs(0, 0);
        cout << cnt << endl;
    }
    return 0;
}


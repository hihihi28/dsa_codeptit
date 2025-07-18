

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector<int>
#define sz size()
int n, k;
vector<int> v;
vector<bool> f;
vector<vector<bool>> ans;

void check()
{
    int sum = 0;
    for(int i = 1; i <= n; ++i) sum += v[i] * f[i];
    if(sum == k) ans.pb(f);
}

void Try(int i)
{
    for(int j = 1; j >= 0; --j)
    {
        f[i] = j;
        if(i == n) check();
        else Try(i + 1);
    }
}

int main()
{
   
    int t = 1;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        v.resize(n + 1);
        f.resize(n + 1);
        for(int i = 1; i <= n; ++i) cin >> v[i];
        sort(v.begin() + 1, v.end());
        Try(1);
        if(ans.empty())
        {
            cout << -1 << endl;
            continue;
        }
        for(vector<bool> &i : ans)
        {
            cout << '[';
            vi tmp;
            for(int j = 1; j <= n; ++j) if(i[j]) tmp.pb(v[j]);
            for(int j = 0; j < tmp.sz - 1; ++j) cout << tmp[j] << ' ';
            cout << tmp.back();
            cout << "] ";
        }
        cout << endl;
        ans.clear();
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

const int N = 200005;

vector<int> gr[N];
int vis[N];

void dfs(int cur) {
    // cout<<cur<<'\n';
    vis[cur] = 1;
    for (int i = 0; i < gr[cur].size(); i++) {
        int to = gr[cur][i];
        if (!vis[to]) {
            dfs(to);
        }
    }
}

int no_connected_components(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
            cnt++;
        }
    }
    return cnt;
}

int32_t main()
{
    //  code starts
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        gr[x].pb(y);
        gr[y].pb(x);
    }
    cout << no_connected_components(n);
}

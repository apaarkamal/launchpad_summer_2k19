#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

const int N = 200005;

vector<int> gr[N];
int vis[N], comp[N];

void dfs(int cur, int comp_no) {
    // cout<<cur<<'\n';
    vis[cur] = 1;
    comp[cur] = comp_no;
    for (int i = 0; i < gr[cur].size(); i++) {
        int to = gr[cur][i];
        if (!vis[to]) {
            dfs(to, comp_no);
        }
    }
}

int32_t main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        gr[x].pb(y);
        gr[y].pb(x);
    }
    int cnt = 1;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i, cnt);
            cnt++;
        }
    }
    int query;
    cin >> query;
    while (query--) {
        int x, y;
        cin >> x >> y;
        if (comp[x] == comp[y]) {
            cout << "in same connected component\n";
        }
        else {
            cout << "not in same connected component\n";
        }
    }
}

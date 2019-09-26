#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

const int N = 100001;

vector<int> gr[N];
int vis[N];

bool is_cyclic(int cur, int par) {
    vis[cur] = 1;
    for (int i = 0; i < gr[cur].size(); i++) {
        int to = gr[cur][i];
        if (vis[to] == 1 && to != par ) {
            return true;
        }
        else if (!vis[to]) {
            return is_cyclic(to, cur);
        }
    }
    return false;
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
    cout << (is_cyclic(1, 0) ? "YES" : "NO");
}

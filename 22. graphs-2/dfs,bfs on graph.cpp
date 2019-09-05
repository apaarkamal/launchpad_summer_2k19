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

void dfs(int cur) {
    cout << cur << '\n';
    vis[cur] = 1;
    for (int i = 0; i < gr[cur].size(); i++) {
        int to = gr[cur][i];
        if (vis[to] == 1) continue;
        dfs(to);

        // if(vis[to]==0){
        //     dfs(to);
        // }
    }
}

void bfs(int source) {
    queue<int> Q;
    int vis_bfs[N];
    Q.push(source);
    while (!Q.empty()) {
        int cur = Q.front();
        Q.pop();
        if (vis_bfs[cur]) continue;
        // cout<<cur<<'\n';
        vis_bfs[cur] = 1;
        for (int i = 0; i < gr[cur].size(); i++) {
            int to = gr[cur][i];
            Q.push(to);
        }
    }
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //  code starts
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        gr[x].pb(y);
        gr[y].pb(x);
    }
    dfs(1);
    bfs(1);
}

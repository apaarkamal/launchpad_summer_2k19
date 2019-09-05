#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 100005;

int tree[4 * N];
int a[N];

void build(int st, int en, int idx) {
    if (st == en) {
        tree[idx] = a[st];
        return ;
    }
    int mid = (st + en) / 2;
    // left build
    build(st, mid, 2 * idx + 1);
    // right build
    build(mid + 1, en, 2 * idx + 2);
    tree[idx] = max(tree[2 * idx + 1], tree[2 * idx + 2]);
}

int query(int st, int en, int l, int r, int idx) {
    if (en < l || st > r) { //no overlap
        return INT_MIN;
    }
    if (st >= l && en <= r) { // complete overlap
        return tree[idx];
    }
    // partial overlap
    int mid = (st + en) / 2;
    // left query
    int q1 = query(st, mid, l, r, 2 * idx + 1);
    // right query
    int q2 = query(mid + 1, en, l, r, 2 * idx + 2);
    return max(q1, q2);
}

int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // int t;cin>>t;while(t--)
    {
        int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        build(0, n - 1, 0);
        cout << query(0, n - 1, 1, 6, 0);
    }
}
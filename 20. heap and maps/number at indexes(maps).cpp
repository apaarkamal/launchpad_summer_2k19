#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //  code starts
    map<int, vector<int>> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x].pb(i);
    }
    for (auto x : mp) {
        cout << "key->" << x.F << " ";
        for (auto y : x.S) {
            cout << y << " ";
        }
        cout << '\n';
    }
}

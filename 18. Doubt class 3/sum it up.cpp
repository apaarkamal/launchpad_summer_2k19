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
	int n, sum, i, j;
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> sum;
	vector<vector<int>> ansv;
	for (i = 1; i < (1 << n); i++) {
		int tempsum = 0;
		for (j = 0; j < n; j++) {
			if ((1 << j)&i) {
				tempsum += a[j];
			}
		}
		if (tempsum == sum) {
			vector<int> temp;
			for (j = 0; j < n; j++) {
				if ((1 << j)&i) {
					temp.pb(a[j]);
				}
			}
			sort(temp.begin(), temp.end());
			ansv.pb(temp);
		}
	}
	sort(ansv.begin(), ansv.end());
	for (auto x : ansv[0]) {
		cout << x << " ";
	} cout << '\n';
	for (i = 1; i < ansv.size(); i++) {
		if (ansv[i] != ansv[i - 1]) {
			for (auto x : ansv[i]) {
				cout << x << " ";
			} cout << '\n';
		}
	}
}

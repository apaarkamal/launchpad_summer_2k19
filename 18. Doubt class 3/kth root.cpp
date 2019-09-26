#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

int give_k(int x, int k, int n) {
	int cnt = 1;
	for (int i = 1; i <= k; i++) {
		cnt *= x;
		if (cnt > n) return n + 1;
	}
	return cnt;
}

int32_t main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, k, ans = 0;
		cin >> n >> k;
		if (k == 1) {
			cout << n << '\n';
		}
		else if (k == 2) {
			int sq = sqrt(n);
			cout << sq << '\n';
		}
		else {
			for (int i = 0;; i++) {
				if (give_k(i, k, n) <= n) {
					ans = i;
				}
				else {
					break;
				}
			}
			cout << ans << '\n';
		}
	}
}

#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

int n, m, x, y;

bool check(int mid) {
	int total = m + (n - mid) * y;
	if (total >= mid * x) {
		return true;
	}
	else {
		return false;
	}
}

int32_t main()
{
	cin >> n >> m >> x >> y;
	int lf = 0, rt = n;
	int ans = 0;
	while (lf <= rt) {
		int mid = (lf + rt) / 2;
		if (check(mid)) {
			ans = mid;
			lf = mid + 1;
		}
		else {
			rt = mid - 1;
		}
	}
	cout << ans;
}

#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

const int N = 100001;
int n, c;
int a[N];

bool check(int mid) {
	// place 1st cow at a[0]
	int cow_placed = 1, i;
	int prev = a[0];
	for (i = 1; i < n; i++) {
		// place a cow if can be placed
		if (a[i] - prev >= mid) {
			cow_placed++;
			prev = a[i];
		}
	}
	// cout<<mid<<(cow_placed>=c?"YES":"NO")<<'\n';
	// return true if cowplaced is greter than required
	// else return false
	return cow_placed >= c;
}

int32_t main()
{
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int lf = 0, rt = 1e10;
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

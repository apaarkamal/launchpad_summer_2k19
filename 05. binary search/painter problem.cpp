#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

bool check(int a[], int mid, int n, int k) {
	int cnt = 1;
	int i, j, temp = 0;
	for (i = 0; i < n; i++) {
		temp += a[i];
		if (temp > mid) {
			cnt++;
			temp = a[i];
		}
	}
	return cnt <= k;
}

int32_t main()
{
	int n, k, t, i, sum = 0;
	cin >> n >> k >> t;
	int a[n];
	int mx = -1;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		mx = max(mx, a[i]);
		sum += a[i];
	}
	int lf = mx, rt = sum;
	while (lf < rt) {
		int mid = (lf + rt) / 2;
		if (check(a, mid, n, k)) {
			rt = mid;
		}
		else {
			lf = mid + 1;
		}
	}
	cout << (lf * t) % 10000003;
}

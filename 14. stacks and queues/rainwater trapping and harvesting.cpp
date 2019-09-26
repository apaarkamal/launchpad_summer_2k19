#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i, n;
	cin >> n;
	int a[n], left[n], right[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	// to the left max element
	left[0] = a[0];
	for (i = 1; i < n; i++) {
		left[i] = max(left[i - 1], a[i]);
	}
	// to the right max element
	right[n - 1] = a[n - 1];
	for (i = n - 2; i >= 0; i--) {
		right[i] = max(right[i + 1], a[i]);
	}
	int ans = 0;
	for (i = 1; i < n - 1; i++) {
		ans += min(left[i], right[i]) - a[i];
	}
	cout << ans << '\n';
}

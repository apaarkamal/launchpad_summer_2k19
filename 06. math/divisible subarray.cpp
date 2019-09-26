#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t; cin >> t; while (t--) {
		int i, j, n;
		cin >> n;
		int a[n + 1], pre[n + 1];
		for (i = 1; i <= n; i++) {
			cin >> a[i];
		}
		pre[0] = 0;
		for (i = 1; i <= n; i++) {
			pre[i] = pre[i - 1] + a[i];
			pre[i] %= n;
			pre[i] += n;
			pre[i] %= n;
		}
		ll cnt[n];
		for (i = 0; i < n; i++) {
			cnt[i] = 0;
		}
		for (i = 0; i <= n; i++) {
			cnt[pre[i]]++;
		}
		// for(i=0;i<n;i++){
		//  	cout<<i<<" "<<cnt[i]<<'\n';
		// }
		ll ans = 0;
		for (i = 0; i < n; i++) {
			ans += ((cnt[i]) * (cnt[i] - 1)) / 2;
		}
		cout << ans << '\n';
	}
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//  code starts
	int t; cin >> t; while (t--) {
		string s;
		cin >> s;
		int i, j, n = s.size();
		string s_ar[1 << n];
		for (i = 0; i < (1 << n); i++) {
			for (j = 0; j < n; j++) {
				if ((i & (1 << j))) {
					s_ar[i] += s[j];
				}
			}
		}
		sort(s_ar, s_ar + (1 << n));
		for (i = 0; i < (1 << n); i++) {
			cout << s_ar[i] << '\n';
		}
	}
}

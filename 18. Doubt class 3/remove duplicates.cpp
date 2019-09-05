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
	string s;
	cin >> s;
	int n = s.size();
	cout << s[0];
	for (int i = 1; i < n; i++) {
		if (s[i] != s[i - 1]) {
			cout << s[i];
		}
	}
}

#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

int32_t main()
{
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int n = s.size();
		stack<int> S;
		bool ans = false;
		pair<int, int> pos[n];
		for (int i = 0; i < n; i++) {
			if (s[i] == '(') {
				S.push(i);
			}
			else if (s[i] == ')') {
				pos[S.top()] = {S.top(), i};
				S.pop();
			}
		}
		for (int i = 0; i < n - 1; i++) {
			// cout<<pos[i].F<<" "<<pos[i].S<<'\n';
			if (s[i] == '(' && pos[i].S == pos[i + 1].S + 1) {
				ans = true;
			}
		}
		cout << (ans ? "Duplicate" : "Not Duplicates") << '\n';
	}
}

#include<bits/stdc++.h>

using namespace std;

bool comp(string a, string b) {
	if (a + b > b + a) return true;
	else return false;
}

int main()
{
	int t; cin >> t; while (t--) {
		int i, n;
		cin >> n;
		string s[n];
		for (i = 0; i < n; i++) {
			cin >> s[i];
		}
		sort(s, s + n, comp);
		for (i = 0; i < n; i++) {
			cout << s[i];
		}
	}
}

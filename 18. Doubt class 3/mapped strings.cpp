#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

void fun(string s, int pos, vector<string> v) {
	if (pos == s.size()) {
		for (auto x : v) {
			char to_print = 'A' + (stoi(x) - 1);
			cout << to_print;
		}
		cout << '\n';
		return;
	}
	//
	string temp = s.substr(pos, 1);
	v.pb(temp);
	fun(s, pos + 1, v);
	//
	if (pos + 1 < s.size() && (s[pos] == '1')) {
		v.pop_back();
		temp = s.substr(pos, 2);
		v.pb(temp);
		fun(s, pos + 2, v);
	}
	if (pos + 1 < s.size() && s[pos] == '2' && s[pos + 1] <= '6') {
		v.pop_back();
		temp = s.substr(pos, 2);
		v.pb(temp);
		fun(s, pos + 2, v);
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//  code starts
	string s;
	cin >> s;
	vector<string> v;
	fun(s, 0, v);
}

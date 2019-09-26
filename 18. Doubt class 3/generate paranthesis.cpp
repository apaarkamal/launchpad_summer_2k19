#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

void fun(string s, int open, int close, int n) {
	if (open == close && open == n) {
		cout << s << '\n';
	}
	if (close + 1 <= n && close < open) {
		fun(s + ")", open, close + 1, n);
	}
	if (open + 1 <= n) {
		fun(s + "(", open + 1, close, n);
	}
}

int32_t main()
{
	int n;
	cin >> n;
	fun("(", 1, 0, n);
}

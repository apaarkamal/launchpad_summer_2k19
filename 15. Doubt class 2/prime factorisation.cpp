#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

vector<pair<int, int>> factors;

//prime factorisation of a number
void prime_factorisation(int n) {
	if (n % 2 == 0) {
		int cnt = 0;
		while (n % 2 == 0) {
			n /= 2;
			cnt++;
		}
		factors.pb({2, cnt});
	}
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) {
			int cnt = 0;
			while (n % i == 0) {
				n /= i;
				cnt++;
			}
			factors.pb({i, cnt});
		}
	}
	// if remaining is a prime number
	if (n > 1) {
		factors.pb({n, 1});
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//  code starts
	int n;
	cin >> n;
	prime_factorisation(n);
	for (int i = 0 ; i < factors.size() ; i++) {
		cout << factors[i].F << " " << factors[i].S << '\n';
	}
}

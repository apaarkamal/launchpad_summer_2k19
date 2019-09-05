#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

const int N = 1000005;

vector<int> primes;
bool p[N];

void seive() {
	int i, j;
	for (i = 2; i < N; i++) {
		if (p[i]) continue;
		primes.pb(i);
		for (j = i; j < N; j += i) {
			p[j] = 1;
		}
	}
}

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//  code starts
	seive();
	int i, j, n, q;
	cin >> n >> q;
	int arr[n];
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	stack<int> a[q + 1], b[q + 1];
	for (i = 0; i < n; i++) {
		a[0].push(arr[i]);
	}
	for (i = 1; i <= q; i++) {
		// stored in prime vector
		int ith_prime = primes[i - 1];

		while (!a[i - 1].empty()) {
			int x = a[i - 1].top();
			a[i - 1].pop();
			if (x % ith_prime == 0) {
				b[i].push(x);
			}
			else {
				a[i].push(x);
			}
		}

	}
	for (i = 1; i <= q; i++) {
		while (!b[i].empty()) {
			cout << b[i].top() << '\n';
			b[i].pop();
		}
	}
	while (!a[q].empty()) {
		cout << a[q].top() << '\n';
		a[q].pop();
	}
}

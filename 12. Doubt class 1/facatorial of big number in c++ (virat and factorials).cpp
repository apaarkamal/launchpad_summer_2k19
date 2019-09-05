#include<bits/stdc++.h>

using namespace std;

void multiply(int a[], int &lastpos, int num) {
	int i, carry = 0;
	for (i = 0; i < lastpos; i++) {
		int res = num * a[i] + carry;
		a[i] = res % 10;
		carry = res / 10;
	}
	while (carry) {
		a[lastpos] = carry % 10;
		carry /= 10;
		lastpos++;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//  code starts
	int ans[10000], i, n;
	ans[0] = 1;
	for (i = 1; i < 500; i++) {
		ans[i] = 0;
	}
	int lastpos = 1;
	cin >> n;
	for (i = 1; i <= n; i++) {
		multiply(ans, lastpos, i);
	}
	for (i = lastpos - 1; i >= 0; i--) {
		cout << ans[i];
	}
}

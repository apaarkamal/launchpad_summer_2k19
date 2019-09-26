#include<bits/stdc++.h>

using namespace std;

string s;
int n;
int temp[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

int change_to_num(string ss) {
	int res = 0, pow_10 = 1;
	for (int i = ss.size() - 1; i >= 0; i--) {
		res += (ss[i] - '0') * pow_10;
		pow_10 *= 10;
	}
	return res;
}

bool check_cb(int i, int j) {
	string ss = s.substr(i, j - i + 1);
	int num = change_to_num(ss);
	if (num == 0 || num == 1) return false;
	for (int i = 0; i < 10; i++) {
		if (num == temp[i]) {
			return true;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (num % temp[i] == 0) {
			return false;
		}
	}
	return true;
}

int go(int i) {
	if (i >= n) return 0;
	int j;
	int ans = 0;
	for (j = i; j < n; j++) {
		if (check_cb(i, j)) {
			int cnt = 0;
			for (int k = j + 1; k < n; k++) {
				cnt = max(cnt, go(k));
			}
			ans = max(ans, cnt + 1);
		}
	}
	return ans;
}

int main()
{
	cin >> n;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		// cout<<go(i)<<'\n';
		ans = max(ans, go(i));
	}
	cout << ans;
}

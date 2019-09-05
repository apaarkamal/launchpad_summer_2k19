#include<bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//  code starts
	int n, k;
	// code to find if the kth bit of a number is set or not
	cin >> n >> k;
	cout << ( ((1 << k) & n) ? "set" : "not set");
}

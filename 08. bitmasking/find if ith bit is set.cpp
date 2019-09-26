#include<bits/stdc++.h>

using namespace std;

int main()
{
	//  code starts
	int n, k;
	// code to find if the kth bit of a number is set or not
	cin >> n >> k;
	cout << ( ((1 << k) & n) ? "set" : "not set");
}

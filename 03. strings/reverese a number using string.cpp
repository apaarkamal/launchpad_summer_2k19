#include<bits/stdc++.h>

using namespace std;

int main()
{
	//  code starts
	string val;
	cin >> val;
	int sz = val.size();
	// iterate backwards in a string
	for (int i = sz - 1; i >= 0; i--) {
		cout << val[i];
	}
	return 0;
}

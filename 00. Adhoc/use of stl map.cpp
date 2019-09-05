#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//  code starts
	// map<int,int> mp;
	// mp[3]=5;
	// mp[2]=1;
	// mp[1]=1;
	// mp.insert({2,1});

	map<string, int> mp;
	mp["apaar"] = 20;
	mp["archit"] = 18;
	for (auto x : mp) {
		cout << x.F << " " << x.S << '\n';
	}
}

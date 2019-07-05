#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll power_mod(ll a,ll b,ll mod){
	ll res=1;
	while(b){
		if(b&1){
			res=(res*a)%mod;
		}
		a=(a*a)%mod;
		b/=2;
	}
	return res;
}
int inverse(int a){
	return power(a,mod-2,mod);
}
// (a+b)%mod=(a%mod+b%mod)%mod;
// (a-b)%mod=(a%mod-b%mod+mod)%mod;
// (a*b)%mod=(a%mod*b%mod)%mod;
// (a/b)%mod=((a%mod*inverse(b))%mod;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//  code starts
	ll a,b,mod;
	cin>>a>>b>>mod;
	cout<<power_mod(a,b,mod);
}
        
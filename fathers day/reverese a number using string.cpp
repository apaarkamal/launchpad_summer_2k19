#include<bits/stdc++.h>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//  code starts
	string val;
	cin>>val;
	int sz=val.size();
	for(int i=sz-1;i>=0;i--){
		cout<<val[i]; 
	}
	return 0;
}
        
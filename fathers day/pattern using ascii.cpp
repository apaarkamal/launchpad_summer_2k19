#include<bits/stdc++.h>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//  code starts
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    for(int j=65;j<65+n-i;j++){
	       cout<<(char)j;
	    }        
	    for(int j=65+(n-i-1);j>=65;j--){
	       cout<<(char)j;
	    }
	    cout<<'\n';
	}
}
        
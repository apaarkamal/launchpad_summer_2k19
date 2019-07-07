#include<bits/stdc++.h>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//  code starts
	int t;cin>>t;while(t--){
		int i,n;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++){
		 	cin>>a[i];                   
		}
		int max_end_here=-1e9,ans=-1e9;
		for(i=0;i<n;i++){
		 	if(max_end_here<0){
		 		max_end_here=0;
		 	}	                   
		 	max_end_here=max_end_here+a[i];
		 	ans=max(ans,max_end_here);
		}
		cout<<ans<<'\n';
	}
}
        
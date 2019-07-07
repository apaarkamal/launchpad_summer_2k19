#include<bits/stdc++.h>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//  code starts
	int k,n,i,j;
	string s;
	cin>>k>>s;
	n=s.size();
	int ans=0,cnt=0;
	j=0;
	for(i=0;i<n;i++){
		j=max(i+1,j);
	 	cnt=max(cnt,0);
	 	if(s[i]=='a'){
	 		while(j<n&&cnt+(s[j]=='b')<=k){
	 			cnt+=(s[j]=='b');
	 			j++;
	 		}
	 		ans=max(ans,j-i);
	 	}
	 	cnt-=(s[i]=='b');
	}
	cnt=0;j=0;
	for(i=0;i<n;i++){
		j=max(i+1,j);
	 	cnt=max(cnt,0);
	 	if(s[i]=='b'){
	 		while(j<n&&cnt+(s[j]=='a')<=k){
	 			cnt+=(s[j]=='a');
	 			j++;
	 		}
	 		ans=max(ans,j-i);
	 	}                   
	 	cnt-=(s[i]=='a');
	}
	cout<<ans;
}
        
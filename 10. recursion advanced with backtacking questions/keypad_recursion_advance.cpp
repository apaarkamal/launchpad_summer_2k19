#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

string names[11]={"prateek","sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"};

string keypad[11]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

string mn;

vector<string> ans;

void make_combinations(int pos,string s){
	if(pos==mn.size()){
		// cout<<s<<'\n';
		ans.pb(s);
		return ;
	}
	for(int i=0;i<keypad[mn[pos]-'0'].size();i++){
	 	make_combinations(pos+1,s+keypad[mn[pos]-'0'][i]);
	}
}

int32_t main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//  code starts
	cin>>mn;
	make_combinations(0,"");

	sort(ans.begin(), ans.end());

	for(int i=0;i<ans.size();i++){
		for(int j=0;j<11;j++){
			for(int k=0;k+ans[i].size()<=names[j].size();k++){
			    if(names[j].substr(k,ans[i].size()) == ans[i]){
			    	cout<<names[j]<<'\n';
			    	
			    }        
			}
		}
	}	
}

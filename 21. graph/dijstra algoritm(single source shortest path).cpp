#include<bits/stdc++.h>
#define F first
#define S second


using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int i,j,n,m;
	cin>>n>>m;
	vector<pair<int,int>> gr[n+1];
	for(i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		gr[x].push_back({y,w});
		gr[y].push_back({x,w});
	}
	int mindis[n+1],vis[n+1];
	for(i=0 ; i<=n ; i++){
		mindis[i]=INT_MAX;
		vis[i]=0;
	}
	int source;
	cin>>source;

	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Q;

	Q.push({0,source});

	while(!Q.empty()){
		pair<int,int> tp=Q.top();// smallest dis till now
		Q.pop();
		int cur_node=tp.S;
		int dis=tp.F;
		// if included then dont visit again
		if(vis[cur_node]==1) continue;
		// otherwise visit the node and include in the shortest path
		vis[cur_node]=1;
		mindis[cur_node]=dis;

		for(auto x:gr[cur_node]){
			int adjacent_node =x.F;
			int weight_of_ad_node = x.S;
			Q.push({mindis[cur_node]+weight_of_ad_node,adjacent_node});
		}
	}
	for(i=0;i<=n;i++){
		cout<<i<<" "<<mindis[i]<<'\n';
	}
	return 0;
}
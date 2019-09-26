#include<bits/stdc++.h>
using namespace std;

int main() {
	// n is for vertices
	// m is for edges
	int i, n, m;
	cin >> n >> m;
	vector<int> gr[n + 1];
	for (i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		gr[x].push_back(y);
		// gr[y].push_back(x); // uncomment for bidirectional/undirected
	}

	//weighted
	// int i,n,m;
	// cin>>n>>m;
	//pair of {node,weight}
	// vector<pair<int,int>> gr[n+1];
	// for(i=0;i<m;i++){
	// 	int x,y,w;
	// 	cin>>x>>y>>w;
	// 	gr[x].push_back({y,w});
	// 	// gr[y].push_back({x,w}); // uncomment for bidirectional/undirected
	// }
	return 0;
}
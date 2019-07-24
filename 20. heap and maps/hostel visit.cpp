#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

class compare{
public:
    bool operator()(int a,int b){
        return a>b;
    }
};

int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    priority_queue<int> Q;
    int q,k;
    cin>>q>>k;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int x,y;
            cin>>x>>y;
            int dis=x*x+y*y;
            Q.push(dis);
        }
        else{
            while(Q.size()>k){
                Q.pop();
            }
            cout<<Q.top()<<'\n';
        }
    }
}

#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define V vector
#define pb push_back

void the_martian(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
    #endif
}

const int N=100005;

int32_t main()
{
    the_martian();
    // int t;cin>>t;while(t--)
    {
        int i,j,k,n,m,ans=0,cnt=0,sum=0;
        cin>>n;
        int a[n+1];
        vector<P> v;
        for(i=0;i<n;i++){
            cin>>a[i];
            v.pb({a[i],i+1});
        }
        sort(v.begin(), v.end());
        set<int> S;
        S.insert(0);
        S.insert(n+1);
        i=0;
        while(i<n){
            j=i;
            while(j<n && v[j].F==v[i].F){
                auto it=S.upper_bound(v[j].S);
                int r=*it;
                it--;
                int l=*it;
                // cout<<l<<" "<<r<<'\n';
                ans=max(ans,(r-l-1)*v[j].F);
                j++;
            }
            j=i;
            while(j<n&&v[j].F==v[i].F){
                S.insert(v[j].S);
                j++;
            }
            i=j;
        }
        cout<<ans;
    }
}
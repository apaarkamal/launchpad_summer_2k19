#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
#define db(x) cout <<#x<<": "<<x<<'\n';

const int N=100005;

int ans=0,n;

int fun(int pos){
    if(pos==1) return 0;

    int q1=INT_MAX,q2=INT_MAX,q3=INT_MAX;
    if(pos%2==0){
        q1=fun(pos/2)+1;
    }
    if(pos%3==0){
        q2=fun(pos/3)+1;
    }
    q3=fun(pos-1)+1;
    return min({q1,q2,q3});
}

int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // int t;cin>>t;while(t--)
    {
        cin>>n;
        cout<<fun(n);
    }
}
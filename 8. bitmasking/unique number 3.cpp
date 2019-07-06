#include<bits/stdc++.h>

using namespace std;

int32_t main()
{
    // int t;cin>>t;while(t--)
    {
        int i,j,k,n,m,ans=0,cnt=0,sum=0;
        cin>>n;
        int bit[n][M];
        for(i=0;i<n;i++){
            int x;
            cin>>x;
            for(j=0;j<M;j++){
                if((x>>j)&1) bit[i][j]=1;
                else bit[i][j]=0;
            }
            if(i==0) continue;
            for(j=0;j<M;j++){
                bit[i][j]+=bit[i-1][j];
            }
        }
        for(i=0;i<M;i++){
            if(bit[n-1][i]%3==1){
                ans+=(1<<i);
            }
        }
        cout<<ans;
    }
}
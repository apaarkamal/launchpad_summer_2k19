#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    int tc;
    cin>>tc;
    while(tc--){
        int i,j,k,n,ans=1;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];                   
        }
        int inc[n],dec[n];
        for(i=0;i<n;i++){
            inc[i]=1;                   
            dec[i]=1;                   
        }
        for(i=0;i<n;i++){
            int temp=0;
            for(j=0;j<i;j++){
                if(a[j]<=a[i]){
                    temp=max(temp,inc[j]);
                }        
            }
            inc[i]=temp+1;
        }
        for(i=n-1;i>=0;i--){
            int temp=0;
            for(j=n-1;j>i;j--){
                if(a[j]<=a[i]){
                    temp=max(temp,dec[j]);
                }        
            }
            dec[i]=temp+1;
        }
        // for(i=0;i<n;i++){
        //     cout<<inc[i]<<" ";                   
        // }cout<<'\n';
        // for(i=0;i<n;i++){
        //     cout<<dec[i]<<" ";                   
        // }cout<<'\n';

        for(i=0;i<n;i++){
            ans=max(ans,inc[i]+dec[i]-1);
            // cout<<inc[i]+dec[i]-1<<" ";                   
        }
        
        cout<<ans<<'\n';
    }
}

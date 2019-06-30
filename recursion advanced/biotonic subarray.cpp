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
        for(i=0;i<n;i++){
            j=i-1;
            while(j>=0&&a[j+1]>=a[j]){
                j--;
            }       
            k=i+1;
            while(k<n&&a[k-1]>=a[k]){
                k++;
            }      
            // cout<<j<<" "<<i<<" "<<k<<'\n';
            ans=max(ans,k-j-1);
        }
        cout<<ans<<'\n';
    }
}

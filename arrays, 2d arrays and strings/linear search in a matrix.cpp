#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    int n,m,i,j;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];               
        }        
    }
    int val;
    cin>>val;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==val){
                cout<<"YES "<<i<<" "<<j;
                return 0;
            }
        }        
    }
    cout<<"NO";
}
        
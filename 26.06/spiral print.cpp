#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    int n,m;
    cin>>n>>m;
    int i=0,j=0;
    int a[n][m];
    int vis[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];               
            vis[i][j]=0;
        }        
    }
    int cnt=0;
    string dir="RIGHT";
    i=0;j=0;
    while(1){
        cout<<a[i][j]<<'\n';
        vis[i][j]=1;
        cnt++;
        if(cnt==m*n){
            break;
        }
        if(dir=="RIGHT"){
            if(!vis[i][j+1]&&j+1<m){
                j++;
            }
            else{
                dir="DOWN";
                i++;
            }
        }
        else if(dir=="LEFT"){
            if(j-1>=0&&!vis[i][j-1]){
                j--;
            }
            else{
                dir="UP";
                i--;
            }
        }
        else if(dir=="DOWN"){
            if(i+1<n&&!vis[i+1][j]){
                i++;
            }
            else{
                dir="LEFT";
                j--;
            }
        }
        else if(dir=="UP"){
            if(i-1>=0&&!vis[i-1][j]){
                i--;
            }
            else{
                dir="RIGHT";
                j++;
            }
        }
    }
}
        
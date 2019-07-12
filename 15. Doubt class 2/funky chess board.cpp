#include<bits/stdc++.h>

using namespace std;

int grid[10][10],vis[10][10],n;
int dx[8]={1,1,2,2,-1,-1,-2,-2};
int dy[8]={2,-2,1,-1,-2,2,-1,1};

void input_grid(){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>grid[i][j];
            vis[i][j]=0;
        }        
    }
}

void knight(int x,int y){
    vis[x][y]=1;
    for(int i=0;i<8;i++){
        int xx=x+dx[i];        
        int yy=y+dy[i];
        if(xx>=0 && xx<n && yy>=0 && yy<n && !vis[xx][yy]){
            knight(xx,yy);
        }        
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    cin>>n;
    input_grid();
    int i,j;
    knight(0,0);
    int ans=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            // cout<<vis[i][j]<<" ";               
            if(grid[i][j]&&(!vis[i][j])){
                ans++;
            }
        }      
        // cout<<'\n';
    }
    cout<<ans;
}
        
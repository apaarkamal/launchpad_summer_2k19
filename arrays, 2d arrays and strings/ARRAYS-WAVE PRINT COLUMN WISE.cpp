#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    int i ,j ,n , m;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];    
        }        
    }
    i=0;j=0;
    while(j<m){
        if(j%2==0){
            for(i=0;i<n;i++){
                cout<<a[i][j]<<", ";           
            }
        }
        else{
            for(i=n-1;i>=0;i--){
                cout<<a[i][j]<<", ";           
            }
        }
        j++;
    }
    cout<<"END";
}

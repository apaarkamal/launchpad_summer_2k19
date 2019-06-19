#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    int i,j,n;
    cin>>n;
    n++;
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            // initialise them to 0
            a[i][j]=0;
        }        
    }
    a[0][0]=1;
    a[1][1]=1;a[1][0]=1;
    for(i=2;i<n;i++){
        a[i][0]=1;
        for(j=1;j<=i;j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }        
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<'\t';
        }        
        cout<<'\n';
    }
}
        
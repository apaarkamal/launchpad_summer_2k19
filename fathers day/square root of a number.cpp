#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        if((i*i)==n){
            cout<<i;
            break;
        }        
    }
    return 0;
}
        
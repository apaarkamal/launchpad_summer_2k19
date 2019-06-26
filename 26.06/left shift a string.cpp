#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    string s;
    cin>>s;
    int i,m,n;
    n=s.size();
    int nn=n;
    cin>>m;
    i=m;
    while(nn--){
        cout<<s[i];
        i++;
        i%=n;
    }
}
        
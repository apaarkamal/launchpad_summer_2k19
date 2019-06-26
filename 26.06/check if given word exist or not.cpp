#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    int n,i;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++){
        cin>>s[i];                   
    }
    string t;
    cin>>t;
    for(i=0;i<n;i++){
        if(s[i]==t){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
        
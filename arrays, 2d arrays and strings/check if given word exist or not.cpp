#include<bits/stdc++.h>

using namespace std;

int main()
{
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
        
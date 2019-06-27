#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    string s,t;
    cin>>s>>t;
    int i,n=s.size(),m=t.size();
    int cnt1[26],cnt2[26];
    for(i=0;i<26;i++){
        cnt1[i]=0;                   
        cnt2[i]=0;                   
    }
    for(i=0;i<n;i++){
        cnt1[s[i]-'a']++;           
    }
    for(i=0;i<m;i++){
        cnt2[t[i]-'a']++;               
    }
    bool check=true;
    for(i=0;i<26;i++){
        if(cnt1[i]!=cnt2[i]){
            check=false;
        }                   
    }
    if(check){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
        
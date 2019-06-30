#include<bits/stdc++.h>

using namespace std;

void permute(string s,int curpos,int n){
    if(curpos==n-1){
        cout<<s<<'\n';
        return ;
    }
    for(int i=curpos;i<n;i++){
        swap(s[i],s[curpos]);
        permute(s,curpos+1,n);
        swap(s[i],s[curpos]);    
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    string s;
    cin>>s;
    int n=s.size();
    permute(s,0,n);
}

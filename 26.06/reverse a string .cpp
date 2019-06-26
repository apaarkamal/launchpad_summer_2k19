#include<bits/stdc++.h>

using namespace std;

string reverse_a_string(string s,int n){
    string reversed;
    reversed.resize(n);
    for(int i=0;i<n;i++){
        reversed[i]=s[n-i-1]; 
    }
    return reversed;
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
    string ans=reverse_a_string(s,n);
    s=ans;
    cout<<s;
}
        
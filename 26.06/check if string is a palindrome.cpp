#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    int i,n;
    string s;
    cin>>s;
    n=s.size();
    bool bl=true;
    for(i=0;i<n;i++){
        if(s[i]!=s[n-i-1]){
            bl=false;
        }                  
    }
    cout<<(bl?"Is palindrome":"Not a palindrome");
}
        
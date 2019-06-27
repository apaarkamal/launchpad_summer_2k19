#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    string s;
    cin>>s;
    int i,j,k,n=s.size();
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(k=i;k<=j;k++){
                cout<<s[k];                                      
            }              
            cout<<'\n';                 
        }                   
    }
}
        
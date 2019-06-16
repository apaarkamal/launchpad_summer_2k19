#include <bits/stdc++.h>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,val=1,start=1;
    cin>>n;
    int mid=(n+1)/2;
    for(int i=1;i<=n;i++){
        int whitespaces=abs(i-mid)*2;
        int j=1;
        while(j<=2*whitespaces){
            cout<<" ";
            j++;
        }
        j=start;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        if(i==1||i==n){
            if(i<mid){
                start++;
            }
            else{
                start--;
            }
            cout<<'\n';
            continue;
        }
        whitespaces=2*abs(start-2)+1;
        j=1;
        while(j<=2*whitespaces){
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=start){
            cout<<j<<" ";
            j++;
        }
        if(i<mid){
            start++;
        }
        else{
            start--;
        }
        cout<<'\n';
    }
}

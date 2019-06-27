#include<bits/stdc++.h>

using namespace std;

int search(int a[],int n,int val){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==val){
            return i;
        }                 
    }
    return -1;
}

int main()
{
    //  code starts
    int i,n,val;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];                 
    }
    cin>>val;
    int cnt=search(a,n,val);
    if(cnt==-1){
        cout<<"NO";
    }
    else{
        cout<<"YES "<<cnt;
    }
}
        
#include<bits/stdc++.h>

using namespace std;



int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];                   
    }

    int val;
    cin>>val;
    int lf=0,rt=n-1,ans=-1;
    while(lf<rt){
        int mid=(lf+rt)/2;
        if(a[mid]==val){
            ans=mid;
            break;
        }
        else if(a[mid]<val){
            lf=mid+1;
        }
        else{
            rt=mid-1;
        }
    }
    if(ans==-1){
        cout<<"Not found";
    }
    else{
        cout<<"Found at index "<<ans;
    }
}   
        
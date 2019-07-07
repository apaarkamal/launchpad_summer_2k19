#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];                   
    }
    for(i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            swap(a[j],a[j+1]);
            j--;
        }       
        a[j+1]=temp;       
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";                   
    }
}
        
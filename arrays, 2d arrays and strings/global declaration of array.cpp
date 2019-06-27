#include<bits/stdc++.h>

using namespace std;

const int N=10;

int a[N],n;

void print_array(){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";               
    }
}

int main()
{
    //  code starts
    int i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];                   
    }
    print_array();
}
        
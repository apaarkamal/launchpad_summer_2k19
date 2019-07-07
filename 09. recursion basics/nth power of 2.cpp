#include<bits/stdc++.h>

using namespace std;

int pow2(int n){
    if(n==0) return 1;
    return 2*pow2(n-1);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    int n;
    cin>>n;
    cout<<pow2(n);
}
        
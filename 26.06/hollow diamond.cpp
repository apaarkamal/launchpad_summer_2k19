#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    int n,i,j,whitespace=-1,mid;
    cin>>n;
    mid=n/2;
    for(i=0;i<n;i++){
        if(i==0){
            for(j=0;j<n;j++){
                cout<<"* ";           
            }
        }   
        else if(i==n-1){
            for(j=0;j<n;j++){
                cout<<"* ";           
            }
        }   
        else{   
            int stars=n-whitespace;
            int wht=whitespace;
            j=0;
            while(j<stars/2){
                cout<<"* ";
                j++;
            }
            j=0;
            while(wht--){
                cout<<"  ";
            }
            j=0;
            while(j<stars/2){
                cout<<"* ";
                j++;
            }
        }             
        if(i<mid){
            whitespace+=2;
        }
        else{
            whitespace-=2;
        }
        cout<<'\n';
    }
}
        
#include <iostream>
using namespace std;
int main() {
    int n,mid;
    cin>>n;
    mid=(n+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1){
                if(j==1){
                    cout<<"*";
                }
                else if(j>=mid){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else if(i==mid){
                cout<<"*";
            }
            else if(i==n){
                if(j==n){
                    cout<<"*";
                }
                else if(j<=mid){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(i<mid){
                    if(j==1||j==mid){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
                else{
                    if(j==n||j==mid){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
            }
        }
        cout<<'\n';
    }
}

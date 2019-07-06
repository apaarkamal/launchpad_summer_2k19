#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    int n,i,j,whitespace=-1,mid;
    cin>>n;
    mid=n/2;
    for(i=0;i<n;i++){
        if(i==0){
            // for first row
            for(j=0;j<n;j++){
                cout<<"* ";           
            }
        }   
        else if(i==n-1){
            // for last row
            for(j=0;j<n;j++){
                cout<<"* ";           
            }
        }   
        else{   
            // count whitespaces for present row
            // count starts for present row
            int stars=n-whitespace;
            int wht=whitespace;
            j=0;
            // print half stars
            while(j<stars/2){
                cout<<"* ";
                j++;
            }
            // print whitespaces
            j=0;
            while(wht--){
                cout<<"  ";
            }
            // print hald other stars
            j=0;
            while(j<stars/2){
                cout<<"* ";
                j++;
            }
        }             
        if(i<mid){
            // increase whitespace
            whitespace+=2;
        }
        else{
            // decrease whitespace
            whitespace-=2;
        }
        cout<<'\n';
    }
}
        
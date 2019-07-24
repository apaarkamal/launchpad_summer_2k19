#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

class minheap{
public:
    vector<int> v;
    // input the array 
    // constructor
    minheap(int n){
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.pb(x);
        }
    }
    void heapify(int idx){
        int left=2*idx+1,right=2*idx+2;
        int mn_idx=idx;
        // find the minimum among par, child_left,child_right
        if(left<v.size() && v[left]<v[mn_idx]){
            mn_idx=left;
        }
        if(right<v.size() && v[right]<v[mn_idx]){
            mn_idx=right;
        }
        // if child is minimum 
        if(mn_idx!=idx){
            swap(v[mn_idx],v[idx]);
            heapify(mn_idx);
        }
    }
    void build_heap(){
        int last_parent=(v.size()-2)/2;
        // start  heapify from last parent 
        // till the root
        for(int i=last_parent;i>=0;i--){
            heapify(i);
        }
    }
    void print_heap(){
        for(int i=0;i<v.size();i++){
            cout<<i<<" -> "<<v[i]<<'\n';  
        }
    }
    int top(){
        // returns smallest element
        return v[0];
    }
    bool empty(){
        return v.empty();
    }
    int size(){
        return v.size();
    }

    // delete smallest
    void pop(){
        swap(v[0],v[v.size()-1]);
        // reduce vector size by 1
        v.pop_back();
        // heapify from 1 position
        heapify(0);
    }
    void push(int val){
        v.push_back(val);
        // push in the end
        int idx=v.size()-1;
        //par of idx
        int par=(idx-1)/2;
        while(idx>0 && v[par]>v[idx]){
            swap(v[par],v[idx]);
            idx=par;
            par=(idx-1)/2;
        }
    }

};

// revese signs to make a max heap/
// or while inserting insert negative values

int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    //  code starts
    int n;
    cin>>n;
    minheap H(n);
    H.build_heap();
    H.print_heap();
    cout<<'\n';
    cout<<H.top();
    H.pop();
    H.print_heap();
    cout<<'\n';
    H.push(-10);
    cout<<H.top();
}

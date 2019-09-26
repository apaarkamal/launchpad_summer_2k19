#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

class node {
public:
    int val;
    vector<node*> children;
    int number_of_children;

    // noc is the number of chilren
    node(int noc, int _val) {
        number_of_children = noc;
        val = _val;
        children(noc, NULL);
    }
}

int32_t main()
{

}

#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

class compare {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

int32_t main()
{
    priority_queue<int, vector<int>, compare> Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    while (!Q.empty()) {
        cout << Q.top() << '\n';
        Q.pop();
    }
}

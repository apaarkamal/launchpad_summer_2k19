#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n;
    cin >> n;
    vector<int> v[n];
    v.push_back(5);
    cout << v.size() << '\n';
    n = v.size();
    for (i = 0; i < n; i++) {
        cout << v[i];
    }
}

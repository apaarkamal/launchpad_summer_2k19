#include<bits/stdc++.h>

using namespace std;

bool comparator(string a, string b) {
    if (a.size() > b.size()) {
        return true;
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //  code starts
    int n, i;
    cin >> n;
    string s[n];
    for (i = 0; i < n; i++) {
        cin >> s[i];
    }
    sort(s, s + n, comparator);
    for (i = 0; i < n; i++) {
        cout << s[i] << '\n';
    }
}

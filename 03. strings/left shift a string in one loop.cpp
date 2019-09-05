#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    string s;
    cin >> s;
    int i, m, n;
    n = s.size();
    int nn = n;
    cin >> m;
    i = m;
    while (nn--) {
        cout << s[i];
        i++;
        i %= n;
        // if  i is greater then length of string
        // then taking mod return it back to the 0th index
    }
}

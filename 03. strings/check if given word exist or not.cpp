#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    int n, i;
    cin >> n;
    string s[n];
    // initialise array of string
    for (i = 0; i < n; i++) {
        // input all strings
        cin >> s[i];
    }
    // input string to be searched
    string t;
    cin >> t;
    for (i = 0; i < n; i++) {
        // check if any string in the array equals the given string
        if (s[i] == t) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}

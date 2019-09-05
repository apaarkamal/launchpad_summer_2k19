#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    int n, i;
    cin >> n;
    string s[n];
    // initialise array of strings
    for (i = 0; i < n; i++) {
        cin >> s[i];
    }
    // prints the 3rd wor and 4th column character
    // in the string if it exists
    cout << s[2][4];
}

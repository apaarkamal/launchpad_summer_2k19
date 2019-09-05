#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    int i, n;
    string s;
    cin >> s;
    n = s.size();
    bool check = true;
    for (i = 0; i < n; i++) {
        // if at any instance ith position from starting
        // not equals ith position from back , then check=false
        if (s[i] != s[n - i - 1]) {
            check = false;
        }
    }
    // using ternary operator
    cout << (check ? "Is palindrome" : "Not a palindrome");
}

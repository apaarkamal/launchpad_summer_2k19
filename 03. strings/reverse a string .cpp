#include<bits/stdc++.h>

using namespace std;

string reverse_a_string(string s, int n) {
    string reversed;
    // initialise a reversed string
    // resize that string
    reversed.resize(n);
    for (int i = 0; i < n; i++) {
        // assign every ith char to n-i-1th character of original string
        reversed[i] = s[n - i - 1];
    }
    return reversed;
}

int main()
{
    //  code starts
    string s;
    cin >> s;
    int n = s.size();
    // call function to reverse a string
    string ans = reverse_a_string(s, n);
    // save the reversed string back to the main string
    s = ans;
    cout << s;
}

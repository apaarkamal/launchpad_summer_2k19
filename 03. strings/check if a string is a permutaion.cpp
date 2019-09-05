#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    string s, t;
    cin >> s >> t;
    int i, n = s.size(), m = t.size();
    // initialise count of characters from a.....z to 0
    int cnt1[26], cnt2[26];
    for (i = 0; i < 26; i++) {
        cnt1[i] = 0;
        cnt2[i] = 0;
    }
    for (i = 0; i < n; i++) {
        // store frequency of characters if string 1
        cnt1[s[i] - 'a']++;
    }
    for (i = 0; i < m; i++) {
        // store frequency of characters if string 2
        cnt2[t[i] - 'a']++;
    }
    bool check = true;
    for (i = 0; i < 26; i++) {
        // if frequency of a character in string 1
        // not equals freq of char in string 2
        // then they cant be a valid permutaion
        if (cnt1[i] != cnt2[i]) {
            check = false;
        }
    }
    if (check) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    string s;
    cin >> s;
    int i, j, k, n = s.size();
    for (i = 0; i < n; i++) {
        // i denotes the start of the window size
        for (j = i; j < n; j++) {
            // j denotes the end of the window size
            for (k = i; k <= j; k++) {
                // print the window from i to j
                cout << s[k];
            }
            cout << '\n';
        }
    }
}

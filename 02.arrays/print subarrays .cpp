#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    int i, j, k, n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i]
    }
    for (i = 0; i < n; i++) {
        // i denotes the start of the window size
        for (j = i; j < n; j++) {
            // j denotes the end of the window size
            for (k = i; k <= j; k++) {
                // print the window from i to j
                cout << a[k];
            }
            cout << '\n';
        }
    }
}

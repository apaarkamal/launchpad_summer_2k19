#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    int n, m, i, j;
    cin >> n >> m;
    int a[n][m];
    // initialise the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            // input the matrix
            cin >> a[i][j];
        }
    }
    int val;
    // input the value to be searched
    cin >> val;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            // check if value at ith row and jth column equals
            // the value to be searched
            if (a[i][j] == val) {
                cout << "YES " << i << " " << j;
                return 0;
            }
        }
    }
    cout << "NO";
}

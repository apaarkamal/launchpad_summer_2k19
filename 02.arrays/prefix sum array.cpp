#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    int n, i;
    cin >> n;
    int a[n + 1];
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int pre[n + 1];
    pre[0] = 0; //because a[0] is empty
    for (i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + a[i]; // recurence relation
    }
    for (i = 0; i <= n; i++) {
        cout << "sum till ith number is" << pre[i] << '\n';
    }
}

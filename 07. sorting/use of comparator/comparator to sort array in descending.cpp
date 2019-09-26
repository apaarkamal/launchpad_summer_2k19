#include<bits/stdc++.h>

using namespace std;

bool comparator(int a, int b) {
    if (a > b) {
        return true;
    }
    return false;
}

int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, comparator);
    for (i = 0; i < n; i++) {
        cout << a[i] << '\n';
    }
}

#include<bits/stdc++.h>

using namespace std;

int a[100];

void bubble_sort(int start, int end) {
    if (end == 0) {
        return ;
    }
    int i;
    for (i = start; i <= end - 1; i++) {
        if (a[i] > a[i + 1]) {
            swap(a[i], a[i + 1]);
        }
    }
    bubble_sort(start, end - 1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //  code starts
    int i, n;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    bubble_sort(0, n - 1);
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

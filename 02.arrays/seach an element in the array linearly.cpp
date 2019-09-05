#include<bits/stdc++.h>

using namespace std;

int search(int a[], int n, int val) {
    int i;
    for (i = 0; i < n; i++) {
        // value at ith index equals val to be searched
        // then return the index
        if (a[i] == val) {
            return i;
        }
    }
    // if value not found then return -1
    return -1;
}

int main()
{
    //  code starts
    int i, n, val;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> val;
    int index = search(a, n, val);
    // if answer returned by the function is -1
    // then value is not found
    // else valur is at index index
    if (index == -1) {
        cout << "NO";
    }
    else {
        cout << "YES " << index;
    }
}

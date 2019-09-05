#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    int i, j, n, m;
    cin >> n;
    int arr1[n];
    for (i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cin >> m;
    int arr2[m];
    for (i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    int k = m + n;
    int arr3[k];
    i = 0; j = 0;
    int kk = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            arr3[kk] = arr1[i];
            kk++;
            i++;
        }
        else {
            arr3[kk] = arr2[j];
            kk++;
            j++;
        }
    }
    while (i < n) {
        arr3[kk] = arr1[i];
        kk++; i++;
    }
    while (j < m) {
        arr3[kk] = arr2[j];
        kk++; j++;
    }
    for (i = 0; i < k; i++) {
        cout << arr3[i] << " ";
    }
}

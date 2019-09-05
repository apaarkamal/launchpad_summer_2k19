#include<bits/stdc++.h>

using namespace std;

void print_array(int array[], int m) {
    for (int i = 0; i < m; i++) {
        cout << array[i] << " ";
    }
}

int main()
{
    //  code starts
    int i, n;
    cin >> n;
    int a[n];
    //initialise and input
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    //passing an array
    print_array(a, n);
}

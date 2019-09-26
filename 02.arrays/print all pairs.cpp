#include<bits/stdc++.h>

using namespace std;

int main()
{
    //  code starts
    // print all pair less than n
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "( " << i << "," << j << " )\n";
        }
    }
}

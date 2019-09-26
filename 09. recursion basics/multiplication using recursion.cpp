#include<bits/stdc++.h>

using namespace std;

int sum(int a, int b) {
    if (b == 1) {
        return a;
    }
    return a + sum(a, b - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << sum(a, b);
}

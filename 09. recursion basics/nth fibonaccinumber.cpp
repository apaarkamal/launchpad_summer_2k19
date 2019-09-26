#include<bits/stdc++.h>

using namespace std;

int fib(int n) {

    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    int ans = fib(n - 2) + fib(n - 1);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    fib(n);
}
#include<bits/stdc++.h>

using namespace std;

int give_sum(int n, bool ev) {
    int ansev = 0, ansod = 0;
    while (n) {
        int rem = n % 10;
        if (rem % 2 == 0) {
            ansev += rem;
        }
        else {
            ansod += rem;
        }
        n /= 10;
    }
    if (ev) return ansev;
    else return ansod;
}

int main()
{
    //  code starts
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sumeven = give_sum(n, 1);
        int sumodd = give_sum(n, 0);
        if (sumeven % 4 == 0 || sumodd % 3 == 0) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
}

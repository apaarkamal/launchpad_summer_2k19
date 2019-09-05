#include<bits/stdc++.h>

using namespace std;



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //  code starts
    int val;
    cin >> val;

    int lf = 0, rt = val, ans = 0;
    while (lf < rt) {
        int mid = (lf + rt + 1) / 2;
        if (mid * mid == val) {
            ans = mid;
            break;
        }
        else if (mid * mid < val) {
            lf = mid + 1;
        }
        else {
            rt = mid - 1;
        }
    }
    cout << ans;
}

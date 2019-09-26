#include<bits/stdc++.h>

using namespace std;



int main()
{
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

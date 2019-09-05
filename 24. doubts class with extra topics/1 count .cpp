#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

const int N = 100005;

int32_t main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // int t;cin>>t;while(t--)
    {
        int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        cin >> n >> k;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        int lf = -1, rt = -1;
        i = 0; j = 0;
        while (i < n) {
            while (j < n) {
                if (a[j] == 0) {
                    if (k > 0) {
                        k--;
                        j++;
                    }
                    else {
                        break;
                    }
                }
                else {
                    j++;
                }
            }
            if (ans < j - i) {
                ans = j - i;
                lf = i; rt = j;
            }
            if (a[i] == 0) k++;
            i++;
        }
        cout << ans << '\n';
        for (i = lf; i < rt; i++) {
            a[i] = 1;
        }
        for (i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }
}
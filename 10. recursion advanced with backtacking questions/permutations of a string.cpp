#include<bits/stdc++.h>

using namespace std;

void permute(string s, int curpos, int n) {
    if (curpos == n - 1) {
        cout << s << '\n';
        return ;
    }
    for (int i = curpos; i < n; i++) {
        swap(s[i], s[curpos]);
        permute(s, curpos + 1, n);
        swap(s[i], s[curpos]);
    }
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    permute(s, 0, n);
}

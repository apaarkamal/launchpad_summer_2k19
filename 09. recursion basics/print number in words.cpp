#include<bits/stdc++.h>

using namespace std;

string words[10] = {"zero", "one", "two", "three", "four",
                    "five", "six", "seven", "eight"
                    "nine"
                   };

void print(int n) {
    if (n == 0) {
        return ;
    }
    print(n / 10);
    cout << words[(n % 10)] << " ";
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //  code starts
    int n;
    cin >> n;
    print(n);
}

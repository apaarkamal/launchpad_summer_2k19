#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

const int N = 26;

class trie {
public:
    trie* next[N];
    bool end;

    trie() {
        for (int i = 0; i < N; i++) {
            next[i] = NULL;
        }
        end = false;
    }

};

void insert(string s, trie* root) {
    int i, n = s.size();
    trie *cur = root;
    for (i = 0; i < n; i++) {
        if (cur->next[s[i] - 'a'] == NULL) {
            cur->next[s[i] - 'a'] = new trie();
        }
        cur = cur->next[s[i] - 'a'];
    }
    cur->end = true;
}

bool search(string s, trie* root) {
    int i, n = s.size();
    trie *cur = root;
    for (i = 0; i < n; i++) {
        if (cur == NULL) {
            return false;
        }
        cur = cur->next[s[i] - 'a'];
    }
    if (cur != NULL && cur->end == true) {
        return true;
    }
    else {
        return false;
    }
}

int32_t main()
{
    //  code starts
    int n, i;
    cin >> n;
    trie* root = new trie();
    for (i = 0; i < n; i++) {
        string s;
        cin >> s;
        insert(s, root);
    }
    if (search("dasd", root)) {
        cout << "YES EXIST";
    }
    else {
        cout << "DOES NOT EXIST";
    }
}

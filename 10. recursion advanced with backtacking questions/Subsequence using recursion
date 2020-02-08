#include<bits/stdc++.h>

using namespace std;

string s;

void printsubseq(int pos, string res) {
	if (pos == s.size()) {
		cout << res << '\n';
		return;
	}
	//exclude
	printsubseq(pos + 1, res);
	// include;
	printsubseq(pos + 1, res + s[pos]);
}

int main()
{
	cin >> s;
	printsubseq(0, "");
}

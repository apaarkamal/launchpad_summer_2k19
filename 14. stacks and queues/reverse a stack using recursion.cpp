#include<bits/stdc++.h>

using namespace std;

stack<int> St;

void insert(int x) {
	if (St.empty()) {
		St.push(x);
	}
	else {
		int temp = St.top();
		St.pop();
		insert(x);
		St.push(temp);
	}
}

void reverse() {
	if (St.empty()) return;
	int x = St.top();
	St.pop();
	reverse();
	insert(x);
}

int main()
{
	int n;
	cin >> n;
	while (n--) {
		int x;
		cin >> x;
		St.push(x);
	}
	reverse();
	while (!St.empty()) {
		cout << St.top() << " ";
		St.pop();
	}
}

#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

class node {
public:
	int val;
	node* left;
	node* right;
	node(int _val) {
		val = _val;
		left = NULL;
		right = NULL;
	}
};

// 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
node* build() {
	int x;
	cin >> x;
	node *root = new node(x);
	string s;
	cin >> s;
	if (s == "true") {
		root->left = build();
	}
	cin >> s;
	if (s == "true") {
		root->right = build();
	}
	return root;
}

void pre(node* cur) {
	if (cur == NULL) {
		return ;
	}
	cout << cur->val;
	pre(cur->left);
	pre(cur->right);
}

void bfs_zigzag(node* root) {
	queue<node*> Q;
	stack<node*> S;
	int level = 1;
	Q.push(root);
	Q.push(NULL);
	while (!Q.empty()) {
		node* cur = Q.front();
		Q.pop();
		if (cur == NULL) {
			level++;
			while (!S.empty()) {
				cout << S.top()->val << " ";
				S.pop();
			}
			if (!Q.empty()) {
				Q.push(NULL);
			}
		}
		else {
			if (cur->left != NULL) {
				Q.push(cur->left);
			}
			if (cur->right != NULL) {
				Q.push(cur->right);
			}
			if (level % 2 == 0) {
				S.push(cur);
			}
			else {
				cout << cur->val << " ";
			}
		}
	}
}

int32_t main()
{
	node* root = build();
	bfs_zigzag(root);
}

#include<bits/stdc++.h>

using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define pb push_back

class node {
public:
	node *left, *right;
	int val;
	node(int _val) {
		val = _val;
		left = NULL;
		right = NULL;
	}
};

// 1 2 -1 -1 4 5 -1 3 -1 -1 -1
node* build_btree() {
	int x;
	cin >> x;
	if (x == -1) {
		return NULL;
	}
	node *cur = new node(x);
	// build left subtree
	cur->left = build_btree();
	// build right subtree
	cur->right = build_btree();
	return cur;
}

node* build_level_order() {
	int x;
	cin >> x;
	if (x == -1) return NULL;
	node *root = new node(x);
	queue<node*> Q;
	Q.push(root);
	while (!Q.empty()) {
		node *cur = Q.front();
		Q.pop();
		int x, y;
		cin >> x >> y;
		if (x != -1) {
			cur->left = new node(x);
			Q.push(cur->left);
		}
		if (y != -1) {
			cur->right = new node(y);
			Q.push(cur->right);
		}
	}
	return root;
}

// depth first search
void dfs(node* cur) {
	if (cur == NULL) return;
	cout << cur->val << '\n';
	dfs(cur->left);
	dfs(cur->right);
	return ;
}

// Root,left,right
void preorder(node* cur) {
	if (cur == NULL) return;
	cout << cur->val << '\n';
	preorder(cur->left);
	preorder(cur->right);
	return ;
}

// left,root,right
void inorder(node* cur) {
	if (cur == NULL) return;
	inorder(cur->left);
	cout << cur->val << '\n';
	inorder(cur->right);
	return ;
}

// left,right,root
void postorder(node* cur) {
	if (cur == NULL) return;
	postorder(cur->left);
	postorder(cur->right);
	cout << cur->val << '\n';
	return ;
}

void bfs(node *root) {
	queue<node*> Q;
	// starting from root
	Q.push(root);
	while (!Q.empty()) {
		node *cur = Q.front();
		Q.pop();
		cout << cur->val << " ";
		if (cur->left != NULL) {
			Q.push(cur->left);
		}
		if (cur->right != NULL) {
			Q.push(cur->right);
		}
	}
	return ;
}

int count_size(node* cur) {
	if (cur == NULL) return 0;
	int count_left = count_size(cur->left);
	int count_right = count_size(cur->right);
	// cout<<cur->val<<" "<<count_right+count_left+1<<'\n';
	return count_right + count_left + 1;
}

int height(node* cur) {
	if (cur == NULL) return 0;
	int count_left = height(cur->left);
	int count_right = height(cur->right);
	// cout<<cur->val<<" "<<count_right+count_left+1<<'\n';
	return max(count_right, count_left) + 1;
}

int sum_tree(node* cur) {
	if (cur == NULL) return 0;
	int sum_left = sum_tree(cur->left);
	int sum_right = sum_tree(cur->right);
	// cout<<cur->val<<" "<<sum_right+sum_left+1<<'\n';
	return sum_right + sum_left + cur->val;
}

// print at level k
void print_at_k(node* cur, int depth, int k) {
	if (cur == NULL) return;
	// cout<<cur->val<<" "<<depth<<" "<<k<<'\n';
	if (depth == k) {
		cout << cur->val << '\n';
		return ;
	}
	print_at_k(cur->left, depth + 1, k);
	print_at_k(cur->right, depth + 1, k);
	return ;
}

void left_view(node *root) {
	queue<node*> Q;
	Q.push(NULL);
	Q.push(root);
	while (!Q.empty()) {
		node* cur = Q.front();
		Q.pop();
		if (cur == NULL) {
			if (!Q.empty()) {
				cout << Q.front()->val << '\n';
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
		}
	}
}

void mirror_tree(node *root) {
	if (root == NULL) return;
	swap(root->left, root->right);
	mirror_tree(root->left);
	mirror_tree(root->right);
}

bool is_identical(node *root1, node *root2) {
	if (root1 == NULL && root2 == NULL) {
		return true;
	}
	if ((root1 != NULL && root2 == NULL) || (root1 == NULL && root2 != NULL)) {
		return false;
	}
	bool left_same = is_identical(root1->left, root2->left);
	bool right_same = is_identical(root1->right, root2->right);
	bool values_equal = (root1->val == root2->val ? true : false);

	return left_same && right_same && values_equal;
}

// height is calculated again and again
int diameter(node* root) {
	if (root == NULL) {
		return 0;
	}
	int height_left = height(root->left);
	int height_right = height(root->right);
	int diameter_left = diameter(root->left);
	int diameter_right = diameter(root->right);
	return max({diameter_left, diameter_right, height_left + height_right});
}

// better version
// first value is diameter of subtree
// second value is height of subtree
pair<int, int> diameter_easy(node* root) {
	if (root == NULL) {
		return {0, 0};
	}
	pair<int, int> left = diameter_easy(root->left);
	pair<int, int> right = diameter_easy(root->right);

	int height_left = left.S;
	int height_right = right.S;
	int height_cur = max(height_left, height_right) + 1;
	int cur_diameter = max({left.F, right.F, height_left + height_right});

	return {cur_diameter, height_cur};
}

// first value of pair is height
// true or false? balanced or not?
pair<int, bool> is_balanced(node* root) {
	if (root == NULL) {
		return {0, true};
	}
	pair<int, bool> left = is_balanced(root->left);
	pair<int, bool> right = is_balanced(root->right);
	int cur_height = max(left.F, right.F) + 1;

	if (abs(left.F - right.F) <= 1 && left.S && right .S) {
		return {cur_height, true};
	}
	else {
		return {cur_height, false};
	}
}

int32_t main()
{
	// node* root=build_btree();
	// node* root=build_level_order();
	// dfs(root);
	// cout<<count_size(root);
	// bfs(root);
	// preorder(root);
	// inorder(root);
	// postorder(root);
	// cout<<height(root);
	// cout<<sum_tree(root);
	// print_at_k(root,0,2);
	// left_view(root);
	// pair<int,int> temp=diameter_easy(root);
	// cout<<"Diameter is "<<temp.F<<" height is "<<temp.S;

}

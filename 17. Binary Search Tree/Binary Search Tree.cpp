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

node* insert(node* root, int val) {
	if (root == NULL) return new node(val);

	if (val < root->val) {
		root->left = insert(root->left, val);
	}
	else {
		root->right = insert(root->right, val);
	}
	return root;
}

// 3 2 4 1 5 -1
node* build_bst() {
	node* root = NULL;
	while (1) {
		int x;
		cin >> x;
		if (x == -1) {
			break;
		}
		root = insert(root, x);
	}
	return root;
}

bool search(node* root, int val) {
	if (root == NULL) return false;

	if (val < root->val) {
		return search(root->left, val);
	}
	else if (val > root->val) {
		return search(root->right, val);
	}
	else {
		return true;
	}
}

node* delete_in(node* root, int val) {
	// element is not present in BST
	// cant be deleted
	if (root == NULL) {
		return NULL;
	}
	if (val < root->val) {
		root->left = delete_in(root->left, val);
	}
	else if (val > root->val) {
		root->right = delete_in(root->right, val);
	}
	else {
		if (root->left == NULL && root->right == NULL) {
			// leaf node
			return NULL;
		}
		else if (root->left != NULL && root->right == NULL) {
			// node with one children
			return root->left;
		}
		else if (root->left == NULL && root->right != NULL) {
			// node with one children
			return root->right;
		}
		else {
			// node with two children
			node *left_sub = root->left;
			node *right_sub = root->right;
			node *temp = left_sub;
			while (temp->right != NULL) {
				temp->right;
			}
			temp->right = right_sub;
			return left_sub;
		}
	}
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
	cout << cur->val << " ";
	preorder(cur->left);
	preorder(cur->right);
	return ;
}

// left,root,right
void inorder(node* cur) {
	if (cur == NULL) return;
	inorder(cur->left);
	cout << cur->val << " ";
	inorder(cur->right);
	return ;
}

// left,right,root
void postorder(node* cur) {
	if (cur == NULL) return;
	postorder(cur->left);
	postorder(cur->right);
	cout << cur->val << " ";
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
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//  code starts
	node* root = build_bst();
	// preorder(root);
	// cout<<'\n';
	// inorder(root);
	// cout<<'\n';
	// postorder(root);
	// root=delete_in(root,30);
	// preorder(root);
	// cout<<'\n';
}

#include<bits/stdc++.h>

using namespace std;

class node {
public:
	int val;
	node* next;
	node(int _val) {
		val = _val;
		next = NULL;
	}
};

bool empty(node *head) {
	return head == NULL;
}

node* push(node* head, int x) {
	if (empty(head)) {
		return new node(x);
	}
	node *cur = head, prev = NULL;
	while (cur) {
		prev = cur;
		cur = cur->next;
	}
	node *nw = new node(x);
	prev->next = nw;
	return head;
}

node* pop(node *head) {
	if (empty(head)) {
		cout << "invalid operation\n";
		return NULL;
	}
	else {
		return head->next;
	}
}

int top(node *head) {
	if (empty(head)) return -1;
	else return head->val;
}

void print(node *head) {
	node *cur = head;
	while (cur != NULL) {
		cout << cur->val << " ";
		cur = cur->next;
	}
	cout << '\n';
	return ;
}

int main()
{
	node *head = nullptr;
	head = push(head, 7);
	head = push(head, 6);
	head = push(head, 8);
	head = pop(head);
	head = push(head, 6);
	print(head);
}

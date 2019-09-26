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
	node *cur = new node(x);
	cur->next = head;
	return cur;
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
	//  code starts
	node *head = nullptr;
	head = push(head, 7);
	head = push(head, 6);
	head = push(head, 8);
	head = pop(head);
	head = push(head, 6);
	print(head);
}

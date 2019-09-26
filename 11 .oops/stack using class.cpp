#include<bits/stdc++.h>

using namespace std;

const int N = 5;

class Stack {
private:
	int a[N], top;
public:
	Stack() {
		top = 0;
	}
	void push(int n) {
		if (top == N) return ;
		a[top] = n;
		top++;
	}
	int pop() {
		if (top == 0) return -1;
		top--;
		return a[top];
	}
	bool isempty() {
		return top == 0;
	}
	bool isfull() {
		return top == N;
	}
	void print() {
		for (int i = top - 1; i >= 0; i--) {
			cout << a[top] << " ";
		} cout << '\n';
	}
};

int main()
{
	Stack S;
	if (S.isempty()) {
		cout << "empty";
	}
	S.push(1);
	S.push(2);
	cout << S.pop();
	S.push(3);
	S.push(4);
	S.push(5);
	if (S.isfull()) {
		cout << "full";
	}
}

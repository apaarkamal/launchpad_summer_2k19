#include<bits/stdc++.h>

using namespace std;

const int N=5;

class node{
public:
	int val;
	node *next;
	node(int _val){
		val=_val;
		next=NULL;
	}
};

node* createll(){
	int n;
	cin>>n;
	node *head=NULL,*tail=NULL;
	while(n--){
		int x;
		cin>>x;
		if(head==NULL){
			node *cur=new node(x);
			head=cur;
			tail=cur;
		}
		else{
			node *cur=new node(x);
			tail->next=cur;
			tail=cur;
		}
	}
	return head;
}

void print(node* head){
	node *cur=head;
	while(cur!=NULL){
		cout<<cur->val<<" ";
		cur=cur->next;
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//  code starts
	node* head=createll();
	print(head);
}        

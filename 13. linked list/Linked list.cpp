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
	// here tail points to the current last node
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

int find_length(node* head){
	int cnt=0;
	node *cur=head;
	while(cur){
		cnt++;
		cur=cur->next;
	}
	return cnt;
}

node* delete_kth_index(node *head,int k){
	node *cur=head,*prev=NULL;
	k=k-1;
	while(k--){
		prev=cur;
		cur=cur->next;
	}
	if(prev==NULL){// if k was 1
		head=cur->next;
	}
	else{
		prev->next=cur->next;
	}
	return head;
}

node* reverse(node* head)
{
    node* cur=head;
    node* prev=NULL;
    while(cur)
    {
        node* ahead=cur->next;
        cur->next=prev;
        prev=cur;
        cur=ahead;
    }
    return prev;
}

node* append_k(node *head,int k){
	node *cur=head,*prev=NULL;
	while(k--){
		cur=cur->next;
	}
	prev=head;
	while(cur->next!=NULL){
		cur=cur->next;
		prev=prev->next;
	}
	node *temp=prev->next;
	prev->next=NULL;
	cur->next=head;
	return temp;
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
